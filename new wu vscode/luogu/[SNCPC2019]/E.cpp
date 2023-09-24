#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
std::string a;
int n,k;
bool check(int m){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            sum++;
            i+=m-1;
        }
    }
    return sum>k;
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    std::cin>>t;
    while(t--){
        std::cin>>n>>k;
        std::cin>>a;
        int l=0,r=n+1,mid=0;
        while(l+1<r){
            mid=(l+r)/2;
            if(check(mid)){
                l=mid;
            }else{
                r=mid;
            }
        }
        std::cout<<r<<std::endl;
    }
    return 0;
}
