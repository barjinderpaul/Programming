#include<bits/stdc++.h>
using namespace std;

string secondLargest(string fullDigits){
	sort(fullDigits.begin(),fullDigits.end());
    reverse(fullDigits.begin(), fullDigits.end());
    prev_permutation(fullDigits.begin(), fullDigits.end());
    cout<<fullDigits;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
 	uint64_t i,n;
    string fullDigits="";
    char digit[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>digit;
        fullDigits+=digit[0];
    }
    cout<<secondLargest(fullDigits);

}
