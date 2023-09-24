// #include <bits/stdc++.h>
// typedef long long ll;
// #define N 100005
// #define INF 0x7fffffff
// #define INFLL 0x7fffffffffffffff
// ll ansx[N],ansf[N];
// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(0);
//     std::cout.tie(0);
//     ll n,m,k;
//     std::cin>>n>>m>>k;
//     std::vector<ll> d(n+1),s(m+1),t(k+1);
//     for(int i=1;i<=n;i++)std::cin>>d[i];
//     for(int i=1;i<=m;i++)std::cin>>s[i];
//     for(int i=1;i<=k;i++)std::cin>>t[i];
//     for(int i=1;i<=n;i++){
//         if(!s[d[i]]){
//             for(int j=1;j<=n;j++){
//                 if(d[j]==i){
//                     ansx[i]++;
//                     for(int l=1;l<=k;l++){
//                         if(!s[i]){
//                             ansf[d[i]+t[l]]++;
//                         }else{
//                             ansf[d[i]+t[l]+1]++;
//                         }
                        
//                     }
//                 }
//             }
//         }else{
//             for(int j=1;j<=n;j++){
//                 if(d[j]==i+1){
//                     ansx[i+1]++;
//                     for(int l=1;l<=k;l++){
//                         if(!s[i]){
//                             ansf[d[i]+t[l]+1]++;
//                         }else{
//                             ansf[d[i]+t[l]+2]++;
//                         }
//                     }
//                 }
//                 }
//             }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
bool flag2[N];
ll ansx[N],flag1[N],ansf[N];
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n,m,k,d,s;
    std::cin>>n>>m>>k;
    std::vector<ll> t(k+1);
    for(int i=1;i<=n;i++){
        std::cin>>d;flag1[i]=d;
    }
    for(int i=1;i<=m;i++){
        std::cin>>s;flag2[s]=true;
    }
    for(int i=1;i<=k;i++){
        std::cin>>t[i];
    }
    for(int i=1;i<=n;i++){
        if(!flag2[flag1[i]]){
            ansx[flag1[i]]++;
        }else{
            flag1[i+1]++;
        }
        for(int j=1;j<=k;j++){
            if(!flag2[flag1[i]+t[j]]){
                ansf[flag1[i]]++;
            }else{
                flag1[i+1]++;
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(ansx[i]||ansf[i]){
            ans++;
        }
    }
    std::cout<<ans<<std::endl;
    for(int i=1;i<=n;i++){
        std::cout<<ansx[i]<<' '<<ansf[i]<<std::endl;
    }
    return 0;
}
