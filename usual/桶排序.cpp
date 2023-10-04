#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int T[N],a[N],n;
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
        T[a[i]]++;
    }
    for(int i=1;i<=maxn;i++){
        for(int j=1;j<T[i];j++){
            std::cout<<i<<' ';
        }
    }
    return 0;
}
