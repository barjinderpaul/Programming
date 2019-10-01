#include<bits/stdc++.h>
int main(){
    double a,d,n,t;
   std::cin>>t;
    while(t-->0){
    std::cin>>a>>d>>n;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2);
    std::cout<< n/2*(2*a + (n-1)*d)<<std::endl;
    }
}
