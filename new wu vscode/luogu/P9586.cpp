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
        int c1,c2,c3,d1,d2,d3;
        std::cin>>c1>>c2>>c3>>d1>>d2>>d3;
        if(c1>d2||c3>d1){
            std::cout<<"C\n";
        }else if((d1-c3)>c2||d3>c1){
            std::cout<<"D\n";
        }else{
            std::cout<<"E\n";
        }
    }
    return 0;
}
