#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,k;
    std::cin>>n>>k;
    if(k==0){
        std::cout<<-1;
        return 0;
    }else if(k==1){
        for(int i=1;i<=n;i++){
            std::cout<<i<<' ';
        }
        return 0;
    }else{
        std::cout<<k<<' ';
        for(int i=1;i<=k-1;i++){
            std::cout<<i<<' ';
        }
        for(int i=k+1;i<=n;i++){
            std::cout<<i<<' ';
        }
    }
    return 0;
}
