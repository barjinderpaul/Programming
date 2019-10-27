#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main() {
	// your code goes here
	int64_t test;
	cin>>test;
	while(test--)
	{
	    int64_t sizee,rows,cols,k,flag=1;
	    int64_t total=0;
	    cin>>sizee>>k;
	    int64_t a[sizee][sizee];
        for(int64_t i=0;i<sizee;i++)
          for(int64_t j=0;j<sizee;j++)
             a[i][j]=0;
        for(int64_t i=0;i<k;i++)
        {
             cin>>rows>>cols;
             a[rows-1][cols-1]=1;
        }
        for(int64_t i=0;i<sizee;i++)
        {
            for(int64_t j=0;j<sizee;j++)
            {
                if(a[i][j]==0)
                {
                    flag=0;
                    for(int64_t k=0;k<sizee;k++)
                       if(a[i][k]!=0)
                          flag=1;
                    if(flag==0)
                       for(int64_t k=0;k<sizee;k++)
                          if(a[k][j]!=0)
                            flag=1;
                    if(flag==0)
                    {
                        a[i][j]=2;
                        total++;
                    }
 
                }
            }
        }
        cout<<total<<" ";
         for(int64_t i=0;i<sizee;i++)
            for(int64_t j=0;j<sizee;j++)
               if(a[i][j]==2)
                 cout<<i+1<<" "<<j+1<<" ";
 
    cout<<"\n";      
	}
 
	return 0;
}
