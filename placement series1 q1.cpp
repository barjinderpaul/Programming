	#include<bits/stdc++.h>
//typedef int64_t int  lli;
#define Fast std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);
int64_t inpheights[100000];
int64_t returnheight[100000];
int64_t every_height(int64_t i,int64_t &inpheights,int64_t&returnheight){
			std::stack<int64_t>newHeight;
			int64_t newh=inpheights[i];
			int j = i;
			while(newh==-1){
				//newHeight.push_back(i);
				newHeight.push(i);
				j = returnheight[j];
				newh = inpheights[j];
			}

			while(!newHeight.empty()){
				//int64_t popped = newHeight.at(newHeight.size()-1);
				//newHeight.pop_back();
				int64_t popped = newHeight.top();
				newHeight.pop();
				inpheights[popped]= ++newh;
			}
			return inpheights[j];
}
int main(){
	Fast;
	int64_t t,n;
    
	std::cin>>t;
	while(t--){
		int64_t h=0,inputHeight;
		std::cin>>n;
		
		for(int i=0;i<100000;i++){
		    inpheights[i]=-1;
		    returnheight=-1;
		}
		for(int64_t i=0;i<n;i++){
			std::cin>>inputHeight;
			if(inputHeight==0) //commander
				inpheights[i]=0;
			returnheight[i] = inputHeight-1;
		}
		
		for(int64_t i=0;i<n;i++){
			//std::vector<int64_t> newHeight;
			//int64_t h=0;
			h+=every_height(i,inpheights,returnheight);
		}
		int64_t fist = (n*(n-1)/2)-h;
		std::cout<<h<<" "<<fist<<"\n";
		
		
		
	}
}
