#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    __int128 a;
    std::vector<int> tmp;
    while(a){
        tmp.push_back(a%10);
        a/=10;
    }
    for(int i=tmp.size()-1;i>=0;i--)std::cout<<tmp[i];
    return 0;
}
