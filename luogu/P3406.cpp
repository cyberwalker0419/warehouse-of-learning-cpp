#include<bits/stdc++.h>
typedef long long ll;
#define N 100005
int n,m,A,B,C;
int p[N],b[N],cnt[N];
void init(){
    scanf("%d%d",&n,&m);
    //差分
    for(int i=1;i<=m;i++){
        scanf("%d",&p[i]);
        if(i>=2){
            int x=p[i-1],y=p[i];
            if(x>y)std::swap(x,y);
            b[x]++;
            b[y]--;
        } 
    }
}
void work(){
    //还原
    ll ans=0;
    for(int i=1;i<n;i++){
        //前缀和
        cnt[i]=cnt[i-1]+b[i];
        scanf("%d%d%d",&A,&B,&C);
        ans+=std::min((ll)A*cnt[i],(ll)B*cnt[i]+C);
    }
    printf("%lld\n",ans);
}
int main(){
    init();
    work();
    return 0;
}