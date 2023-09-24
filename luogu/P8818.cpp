/*#include<bits/stdc++.h>
#define INF 0x7FFFFFFFFFFFFFFF
typedef long long ll;
ll A[10001],B[10001],l1,r1,l2,r2,n,m,q,minn[10001];
void init(){
    std::cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
        std::cin>>A[i];
    }
    for(int i=1;i<=m;i++){
        std::cin>>B[i];
    }
}
void work(){
    while(q--){
        std::cin>>l1>>r1>>l2>>r2;
        for(int i=l1;i<=r1;i++){
            minn[i]=INF;
            for(int j=l2;j<=r2;j++){
                minn[i]=std::min(minn[i],A[i]*B[j]);
            }
        }
        ll ans=-INF;
        for(int i=l1;i<=r1;i++){
            ans=std::max(ans,minn[i]);
        }
        std::cout<<ans<<"\n";
    }
}
int main(){
    init();
    work();
    return 0;
}*/
#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    return 0;
}
