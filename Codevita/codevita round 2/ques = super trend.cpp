#include<bits/stdc++.h>
using namespace std;
int p_curr_low = 5,p_prev_close=3,p_curr_high=4,p_prev_low=2;
float v_curr_low = 0,v_prev_close = 0,v_curr_high=0,v_prev_low=0;
void calc(float &basic_upper,float &basic_lower,float &final_upper,float &final_lower,float &super_trend,float a[],float atr){
	float p_basic_upper = basic_upper;
	float p_basic_lower = basic_lower;
	//cout<<"p curr high = "<<p_curr_high<<endl;
	basic_upper = (a[p_curr_high] + a[p_curr_low]) + 3 * atr;
	basic_lower = (a[p_curr_high] + a[p_curr_low])/2 - 3 * atr;
	//cout<<"basic_upper = "<<basic_upper<<endl;
	//cout<<"basic_lower = "<<basic_lower<<endl;
	if(basic_upper < final_upper || a[p_prev_close] > final_upper )
		final_upper = basic_upper;
	else
		final_upper = final_upper;  
		
	if( basic_lower > final_lower || a[p_prev_close] > final_lower)
		final_lower = basic_lower;
	else
		final_lower = final_lower;
	
	//cout<<"final upper = "<<final_upper<<endl;
	//cout<<"final lower = "<<final_lower<<endl;

	
	
	if(a[p_prev_close + 3] <= final_upper)
		super_trend = final_upper;
	else
		super_trend = final_lower; 

	//cout<<"super_trend = "<<super_trend<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	float a[3*n];	
	for(int i=1;i<=3*n;i++){
		cin>>a[i];
		//cout<<" jo at i = " <<i <<endl;
	}
//	cout<<" jo "<<endl;
	//int p_curr_low = 5,p_prev_close=3,p_curr_high=4,p_prev_low=2;
	float v_curr_low = 0,v_prev_close = 0,v_curr_high=0,v_prev_low=0;
	vector<float>toAvg;
	for(int i=1;i<10;i++){
		
		float a1,a2,a3,m1,tr;
		a1 = a[p_curr_high] - a[p_curr_low];
		a2 = a[p_curr_high] - a[p_prev_close];
		m1 = max(a1,a2);
		a3 = a[p_curr_low] - a[p_prev_close];
		tr = max(m1,a3);
		toAvg.push_back(tr);
		p_curr_low+=3;
		p_curr_high+=3;
		p_prev_close+=3;
		p_prev_low+=3;
		
	}
		float init_sum = 0,atr=0;
		atr = accumulate(toAvg.begin(),toAvg.end(),init_sum);
		atr = atr/10;		
		//cout<<atr<<endl;
		//cout<<a[p_prev_close]<<endl;
		//cout<<a[p_curr_high]<<endl;
		float basic_upper=0,basic_lower=0,final_upper=0,final_lower=0,super_trend=0;
		calc(basic_upper,basic_lower,final_upper,final_lower,super_trend,a,atr);
		int bflag = 0, sflag=0;
		//Buy
		while(bflag == sflag){
				
				cout<<" buy super _ trend  = "<<super_trend<<endl;
				cout<<" buy cuurent close = " <<a[p_prev_close+3]<<endl;
				
		
				if(super_trend > a[p_prev_close + 3]){
					cout<<"Buy at " <<a[p_prev_close + 3] <<" (New Position)."<<endl;
					bflag = 0;
				}
				else 
					bflag=1;
				p_curr_low+=3;
				p_curr_high+=3;
				p_prev_close+=3;
				p_prev_low+=3;
				calc(basic_upper,basic_lower,final_upper,final_lower,super_trend,a,atr);
				cout<<" sell super _ trend  = "<<super_trend<<endl;
				cout<<" sell cuurent close = " <<a[p_prev_close+3]<<endl;
				
				if(super_trend < a[p_prev_close + 3]){
					cout<<"Sell at "<<a[p_prev_close + 3]<<" (Close Previous Position)."<<endl;
				 	sflag = 0;
				}
				else
					sflag = 1;
				
				p_curr_low+=3;
				p_curr_high+=3;
				p_prev_close+=3;
				p_prev_low+=3;
				
		
		}
}
