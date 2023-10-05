#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    long long n,m;
    std::cin>>n,m;
    if(m*n%2==0){
        std::cout<<"Kelin";
    }else{
        std::cout<<"Walk Alone";
    }
    return 0;
}
