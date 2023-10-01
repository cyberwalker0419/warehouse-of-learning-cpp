#include <bits/stdc++.h>
#define N 10005
std::vector<int> G[N];
std::vector<std::pair<int,int> > G[N];//自带两个成员变量,
bool vis[N];
void dfs(int u){
    for(auto v:G[u]){
        if(!vis[v]){
            vis[v]=1;
            dfs(v);
        }
    }
    /*改变
    for(auto &v:G[u]){
        if(!vis[v]){
            vis[v]=1;
            dfs(v);
        }
    }*/
    /*c++17;
    for(auto [v,w]:G[u]){
        if(!vis[v]){
            vis[v]=1;
            dfs(v);
        }
    }*/
    /*c++14改17偷懒;
    for(auto xx:G[u]){
        int v=xx.first,w=xx.second;
        if(!vis[v]){
            vis[v]=1;
            dfs(v);
        }
    }*/
}//起点打标记
int main(){
/*    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);//关闭缓冲区

    int n;
    std::cin>>n;
    std::vector<int> a(n+1,0);//(大小,初始化数字),可用cin
    for(auto aa:a){

    匿名函数
    std::sort(a.begin(),a.end(),[&](int aa,int bb){
        return aa>>bb;
    })
    std::function(int<int>) = (后面一致)
    }*/
    for(int i=1;i<=m;i++){
        std::cin>>u>>v>>w;
        G[u].pushback(v);//单项图,无向图u v互换
        G[u].pushback({v,w});
    }
    //遍历dfs

   return 0;
}
