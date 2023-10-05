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
    std::string b;
    std::cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]>=65&&a[i]<=90){
            a[i]=a[i]-'A'+'a';
        }
        if(a[i]==95){
            a[i]=45;
        }
    }
    b="solution-"+a;
    std::cout<<b;
    return 0;
}
