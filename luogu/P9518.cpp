#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
struct node{
    int id;
    std::string name;
    bool operator<(const node& rhs)const{
        return id<rhs.id;
    }//重载
};
std::set<std::pair<int,std::string> > sss;
std::set<node> s;
int nxt[N],pre[N];
std::string name[N];
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    std::cin>>n;
    s.insert({100,"adad"});
    for(auto ss:s){
        
    }
    std::queue<int> q;
    return 0;
}
