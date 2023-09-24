#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,l,r;
    std::string a;
    std::cin>>n>>l>>r;
    std::cin>>a;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]=='a'){
            if(cnt1+1<=r){
                std::cout<<a[i];
                cnt1++;
            }else{
                std::cout<<'b';
                cnt2++;
            }
        }else{
            if(cnt2+1<=n-l){
                std::cout<<'a';
                cnt2++;
            }else{
                std::cout<<a[i];
                cnt1++;
            }
        }
    }    
    /*while(n--){
        if(l==r==n){
            std::cout<<q;
            continue;
        }
        else if(l==r==0){
            for(int i=0;i<n;i++){
                if(q[i]!='a'){
                    std::cout<<'a';
                }else{
                    std::cout<<'b';
                }
            }
            continue;
        }
        else if(l==r){
            for(int i=0;i<l;i++){
                if(q[i]!='a'){
                    std::cout<<'a';
                }else{
                    std::cout<<'b';
                }
            }
            for(int i=l;i<n;i++){
                std::cout<<q[i];
            }
            continue;
        }
        else{

        }
    }*/

    return 0;
}
