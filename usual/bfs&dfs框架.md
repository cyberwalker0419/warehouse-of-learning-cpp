```cpp
#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
void dfs(int now){
    if(){
        //出口
        return;
    }
    for(int i=1;i<=n;i++){
        if(判断条件){
            //mark(标记)
            dfs(now+1);
            //undo(回滚)
            //delete mark
        }
    }
}
void bfs(int s/*起点*/){
    std::queue<int> q;
    q.push(s);
    //mark
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=1;i<=n;i++){
            if(){
                //mark
                q.push(i);
            }
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    dfs();
    bfs();
    return 0;
}
```