#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,y,z;
    std::cin>>n>>y>>z;
    std::vector<int> a(n+1,y),b(n+1,y);
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        std::cin>>b[i];
    }
    int cnt1=0,cnt2=0,flag1=0;
    //for(int i=1;i<=n;i++){
     //   if(a[i]!=y){
     //       flag1=1;
     //   }
      //  if(b[i]!=y){
     //       flag1=1;
      //  }
    //}
   // if(flag1==0){
    //    std::cout<<0;
    //    return 0;
   // }
    for(int i=1;i<=n;i++){
        if(a[i-1]==y&&(a[i]!=y)){
            cnt1++;
            flag1=1;
        }
    }
    for(int i=1;i<=n;i++){
        if(b[i-1]==y&&(b[i]!=y)){
            cnt2++;
            flag1=1;
        }
    }
    if(!flag1){
        std::cout<<0;
        return 0;
    }
    int ans=std::max(1,std::max(cnt1,cnt2)-z);
    //std::cout<<cnt1<<' '<<cnt2<<std::endl<<ans;
    std::cout<<ans;
    return 0;
}
