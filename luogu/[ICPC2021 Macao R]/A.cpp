#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t,n,u,d;
    std::cin>>t;
    while(t--){
        std::cin>>n;
        std::vector<std::vector<int> > a(n,std::vector<int>(n));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                std::cin>>a[i][j];
            }
        }
        std::vector<std::vector<int> > w;
        int q=1;
        for(int i=1;i<=n/2;i++){
            for(int j=i;j<=n-i;j++){
                w[q].push_back(a[i][j]);
                q++;
            }
            for(int j=i+1;j<=n-i;j++){
                w[q].push_back(a[i][j-1]);
            }
            for(int j=i+1;j<=n-i;j++)
        }
            
        
    }
    return 0;
}
