#include <bits/stdc++.h>

typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string a;
    int sumn=0,sumb=0,sums=0;
    std::cin>>a;
    for(int i=0;i<8;i++){
        if(a[i]>='0'&&a[i]<='9'){
            sumn++;
        }
        if(a[i]>='a'&&a[i]<='z'){
            sums++;
        }
        if(a[i]>='A'&&a[i]<='Z'){
            sumb++;
        }
    }
    std::cout<<sumn<<' '<<sums<<' '<<sumb;
    return 0;
}
