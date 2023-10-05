#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int T;
    std::cin>>T;
    while(T--){
        int n;
        bool flag=0,flag1=1;
        std::cin>>n;
        std::vector<int> t(n+1),b(n+1),tf(n+1,0);
        for(int i=1;i<=n;i++){
            std::cin>>t[i];
        }
        for(int i=1;i<=n;i++){
            std::cin>>b[i];
        }
            for(int i=0;i<=20000;i++){
                if(b[1]<tf[1]*i){
                    flag=0;
                    break;
                }
                if((b[1]-tf[1]*i)%t[1]==0){
                    flag=1;
                    for(int j=2;j<=n;j++){
                        if(b[j]-tf[j]*i%t[j]!=0){
                            break;
                        }
                    }
                }
            }
            if(flag&&flag1){
                std::cout<<"Yes";
            }else{
                std::cout<<"No";
            }
    }
    return 0;
}
