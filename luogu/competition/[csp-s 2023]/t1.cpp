#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    std::cin>>n;
    std::vector<int> a(n+1),b(n+1);
    std::map<int,int> m;
    for(int k=1;k<=n;k++){
        for(int i=1;i<=5;i++)std::cin>>a[i];
        for(int j=1;j<=5;j++){
            for(int i=1;i<=5;i++)b[i]=a[i];
            for(int i=1;i<=9;i++){
                b[j]=(b[j]+1)%10;
                m[b[1]*10000+b[2]*1000+b[3]*100+b[4]*10+b[5]]++;
            }
        }
        for(int j=1;j<=5;j++){
            for(int i=1;i<=5;i++)b[i]=a[i];
            for(int i=1;i<=9;i++){
                b[j]=(b[j]+1)%10;
                b[j+1]=(b[j+1]+1)%10;
                m[b[1]*10000+b[2]*1000+b[3]*100+b[4]*10+b[5]]++;
            }
        }
    }
    int cnt=0;
    for(auto mm:m){
        if(mm.second==n)cnt++;
    }
    std::cout<<cnt;
    return 0;
}
