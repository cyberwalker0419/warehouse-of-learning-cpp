/*#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int a,b,c,m;
    std::cin>>a>>b>>c>>m;
    bool flag;
    while(m--){
        int op,k,xnk=0,ynk=0,znk=0;
        std::cin>>op>>k;
        if(op==1){
            if(xnk<k){
                if(flag)std::cout<<((a-k)*b*c)<<'\n';
                else std::cout<<((a+xnk-k)*b*c)<<'\n';
                xnk=k;
                flag=0;
            }
        }else if(op==2){
            if(ynk<k){
                if(flag) std::cout<<((b-k)*a*c)<<'\n';
                else std::cout<<((b+ynk-k)*a*c)<<'\n';
                ynk=k;
                flag=0;
            }
        }else{
            if(znk<k){
                if(flag)std::cout<<((c-k)*a*b)<<'\n';
                else std::cout<<((c+znk-k)*a*b)<<'\n';
                znk=k;
                flag=0;
            }
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll a,b,c,m,xxx=0,xxy=0,xxz=0;
    std::cin>>a>>b>>c>>m;
    while(m--){
        ll op,k;
        std::cin>>op>>k;
        if(op==1){
            xxx=std::max(xxx,k);
        }else if(op==2){
            xxy=std::max(xxy,k);
        }else{
            xxz=std::max(xxz,k);
        }
        std::cout<<(a-xxx)*(b-xxy)*(c-xxz)<<'\n';
    }
    return 0;
}
