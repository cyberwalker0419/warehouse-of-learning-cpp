//八皇后问题
#include<bits/stdc++.h>
#define N 55
bool l[N],r[N],col[N];
int n,ans=0,line[N];
void init(){
    std::cin>>n;
}
void dfs(int now){
    if(now==n+1){
        ans++;
        if(ans<=3){
            for(int i=1;i<=n;i++){
                printf("%d%c",line[i],i==n?'\n':' ');
            }
        }
        return;
    }
    for(int i=1;i<=n;i++){
        if(col[i]==0&&l[now+i]==0&&r[now-i+n]==0){
            col[i]=l[now+i]=r[now-i+n]=1;//mark
            line[now]=i;
            dfs(now+1);
            col[i]=l[now+i]=r[now-i+n]=0;//undo(回溯法)
        }
    }
}
void work(){
    dfs(1);
    std::cout<<ans<<std::endl;
}
int main(){
    init();
    work();
    return 0;
}