#include <bits/stdc++.h>
int n,a[1145],b[1145],sum=0;
void init(){
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>a[i]>>b[i];
        if(b[i]==1){
            sum+=a[i];
        }else if(b[i]==0){
            sum+=10;
        }
    }
}
void work(){
    std::cout<<sum;
}
int main(){
   init();
   work();
   return 0;
}
