#include <cstdio>

int ncr[1002][1002]={0};

int main(){
  int t,n,r;

  for(n=1,ncr[0][0]=1;n<1001;n++){
    for(r=1,ncr[n][0]=1;r<=n;r++){
      ncr[n][r]=ncr[n-1][r-1]+ncr[n-1][r];
      if(ncr[n][r]>1000000006) ncr[n][r]-=1000000007;
    }
  }
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&r);
    if(r>n) puts("0");
    else printf("%d\n",ncr[n][r]);
  }
}
