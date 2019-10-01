#include<iostream>
using namespace std;
int main(){
	int n,k,c=0;
	cin>>n>>k;
	int j=1;
	for(int i=97;i<=97+n;i++){
	if(j>n)
		break;
	if(c==k){
				i = 97;
				c=0;
				}
		cout<<(char)i;
		c++;
		j++;
		

		}

}
