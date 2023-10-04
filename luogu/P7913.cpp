// #include <bits/stdc++.h>
// typedef long long ll;
// #define N 100005
// #define INF 0x7fffffff
// #define INFLL 0x7fffffffffffffff
// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(0);
//     std::cout.tie(0);
//     int n,m1,m2,ans=0;
//     std::cin>>n>>m1>>m2;
//     std::vector<std::pair<int,int> > a(m1);
//     std::vector<std::pair<int,int> > b(m2);
//     for(int i=0;i<m1;i++){
//         std::cin>>a[i].first>>a[i].second;
//     }
//     for(int i=0;i<m2;i++){
//         std::cin>>b[i].first>>b[i].second;
//     }
//     std::sort(a.begin(),a.end());
//     std::sort(b.begin(),b.end());
//     for(int i=0;i<=n;i++){
//         std::priority_queue<int,std::vector<int>,std::greater<int> > q1,q2;
//         int cnt=0;
//         for(int j=0;j<m1;j++){
//             while(!q1.empty()&&q1.top()<a[j].first)q1.pop();
//             if(q1.size()+1<=i){
//                 cnt++;
//                 q1.push(a[j].second);
//             }
//         }
//         for(int j=0;j<m2;j++){
//             while(!q2.empty()&&q2.top()<b[j].first)q2.pop();
//             if(q2.size()+1<=n-i){
//                 cnt++;
//                 q2.push(b[j].second);
//             }
//         }
//         ans=std::max(ans,cnt);
//     }
//     std::cout<<ans;
//     return 0;
// }
#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
struct heap{
    int first,second;
    bool operator<(const heap &rhs)const{
        return rhs.first<first;
    }
};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m1,m2;
    std::cin>>n>>m1>>m2;
    std::vector<std::pair<int,int> > a(m1);
    std::vector<std::pair<int,int> > b(m2);
    std::priority_queue<heap> p1,p2;
    std::vector<int> cnt1(n+1),cnt2(n+1);
    for(int i=0;i<m1;i++){
        std::cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<m2;i++){
        std::cin>>b[i].first>>b[i].second;
    }
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    std::priority_queue<int,std::vector<int>,std::greater<int> > bridge1,bridge2;
    for(int i=1;i<=n;i++){
        bridge1.push(i);
        bridge2.push(i);
    }
    for(int i=0;i<m1;i++){
        while(!p1.empty()&&p1.top().first<a[i].first){
            bridge1.push(p1.top().second);
            p1.pop();
        }
        if(!bridge1.empty()){
            int x=bridge1.top();
            p1.push({a[i].second,x});
            cnt1[x]++;
            bridge1.pop();
        }
    }
    for(int i=0;i<m2;i++){
        while(!p2.empty()&&p2.top().first<b[i].first){
            bridge2.push(p2.top().second);
            p2.pop();
        }
        if(!bridge2.empty()){
            int x=bridge2.top();
            p2.push({b[i].second,x});
            cnt2[x]++;
            bridge2.pop();
        }
    }
    std::vector<int> q1(n+1),q2(n+1);
    for(int i=1;i<=n;i++){
        q1[i]=q1[i-1]+cnt1[i];
        q2[i]=q2[i-1]+cnt2[i];
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=std::max(ans,q1[i]+q2[n-i]);
    }
    std::cout<<ans;
    return 0;
}
