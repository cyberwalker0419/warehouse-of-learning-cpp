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
        int n,r=0,e=0;
        std::cin>>n;
        if(n==0){
            e=1;
        }else{
            while(n!=0){
                int i=n%10;
                if(i==0){
                    i=9;
                    n=n-10;
                }
                if(i>=1&&i<=8){
                    i+=1;
                }
                e+=i;
                r++;
                n/=10;
            }
        }
        std::cout<<e<<'\n';
    }
    return 0;
}
