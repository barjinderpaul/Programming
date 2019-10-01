/* [base^exp]

			{ base^exp/2 * base^exp/2 , if exp = even	}
base^exp = 	{ base * base^(exp-1) 	  , if exp = odd	}
			{ 		1 				  , if exp = 0		}

*/
#include<bits/stdc++.h>
using namespace std;

int calculate(int base, int exp){
	int p=1000000007;
	if(exp == 0)
		return 1;
	else if(exp%2==0){
		int ans = calculate((base%p),((exp%p/2)%p));
		return  ans*ans;
//		return calculate(base,exp/2) * calculate(base,exp/2);

		}
	else{
		return	base * calculate(base,(exp-1));
	}
}

int main(){
	int base,exp,p=1000000007;
	cin>>base>>exp;
	cout<<calculate(base,exp);
}
