#include<bits/stdc++.h>
typedef long long ll;    
//重载结构体
struct heap{
    int id,v;
    //重载<号
    bool operator<(const heap& rhs)const{
        //"<"改">"变大根堆
        return rhs.v<v;
    }
};
//小根堆定义
///std::priority_queue<int,std::vector<int>,std::greater<int> > q;
std::priority_queue<heap> q;
int n,x,ind;
ll ans;
void init(){
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>x;
        q.push((heap){i,x});
    }
}
void work(){
    ind=n;
    for(int i=1;i<=n-1;i++){
        int a=q.top().v;q.pop();
        int b=q.top().v;q.pop();
        ans+=a+b;
        q.push((heap){++ind,a+b});
    }
    printf("%lld\n",ans);
}
int main(){
    init();
    work();
    return 0;
}