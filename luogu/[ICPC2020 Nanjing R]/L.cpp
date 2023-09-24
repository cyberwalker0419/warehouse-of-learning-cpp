#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    std::cin>>t;
    while(t--){
        int n,m,cnt=0,maxn=0;
        std::map<int,int> p;
        std::cin>>n>>m;
        for(int i=1;i<=n;i++){
            int x;
            std::cin>>x;
            p[x]++;
        }
        for(int i=1;i<=m;i++){
            int x;
            std::cin>>x;
            p[x]=0;
        }
        for(auto pp:p){
            if(pp.second){
                cnt+=pp.second;
            }else{
                cnt=0;
            }
            maxn=std::max(maxn,cnt);
        }
        if(!maxn){
            std::cout<<"Impossible"<<"\n";
        }else{
            std::cout<<maxn<<"\n";
        }
    }
    return 0;
}
