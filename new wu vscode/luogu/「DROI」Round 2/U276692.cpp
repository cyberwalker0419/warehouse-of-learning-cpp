#include <bits/stdc++.h>
typedef long long ll;
ll T ;
int main(){
    std::cin>>T;
    while(T--){
        ll n=0,k=0,flag=0;
        std::cin>>n>>k;
        for(ll x=k;(n-x)>k;x++){
            if(x%(n-x)==k){
                std::cout<<x<<' '<<(n-x)<<std::endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            std::cout<<-1<<std::endl;
        }
    }
   return 0;
}
