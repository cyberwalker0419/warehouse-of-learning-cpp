#include<bits/stdc++.h>
typedef long long ll;
#define N 100005
int fa[N];
int n,m,p,x,y;
int find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}//找爹(并查集)
void init(){
    scanf("%d%d%d",&n,&m,&p);
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }//初始化
    while(m--){
        scanf("%d%d",&x,&y);
        fa[find(x)]=find(y);
    }//合并
}
void work(){
    while(p--){
        scanf("%d%d",&x,&y);
        printf((find(x)==find(y))?"Yes\n":"No\n");
    }//输出
}
int main(){
    init();
    work();
    return 0;
}