/*#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    s=" "+s;
    std::vector<std::vector<int> > f(n+1,std::vector<int>(n+1));
    for(int i=1;i<n;i++){
        f[i][i+1]=(s[i]==s[i+1]);
    }
    for(int l=3;l<=n;l++){
        for(int i=1;i+l-1<=n;i++){
            int j=i+l-1;
            if(s[i]==s[j])f[i][j]=f[i+1][j-1];
            for(int k=i;k<j;k++){
                if(f[i][k]&&f[k+1][j]){
                    f[i][j]=1;
                    break;
                }
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(f[i][j])ans++;
        }
    }
    std::cout<<ans;
    return 0;
}35*/
/*#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    s=" "+s;
    std::vector<int> f(n+1),pos(n+1);
    for(int i=2;i<=n;i++){
        std::stack<char> sta;
        sta.push(s[i]);
        for(int j=i+1;j>=1;j--){
            if(s[j]==sta.top()){
                sta.pop();
                if(sta.empty()){
                    pos[i]=j;
                    break;
                }
            }else{
                sta.push(s[j]);
            }
        }
    }
    ll ans=0;
    for(int i=2;i<=n;i++){
        if(pos[i])f[i]=f[pos[i]-1]+1;
        ans+=f[i];
    }
    std::cout<<ans;
    return 0;
}50*/
#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    s=" "+s;
    std::vector<ll> f(n+1),pos(n+1);
    std::vector<std::vector<int> >pre(n+1,std::vector<int>(26));
    ll ans=0;
    for(int i=2;i<=n;i++){
        if(s[i]==s[i-1])pos[i]=i-1;
        else pos[i]=pre[i-1][s[i]-'a'];
        if(pos[i]){
            for(int ch=0;ch<26;ch++){
                if(s[pos[i]-1]-'a'==ch)pre[i][ch]=pos[i]-1;
                else pre[i][ch]=pre[pos[i]-1][ch];
            }
            f[i]=f[pos[i]-1]+1;
        }
        ans+=f[i];
    }
    std::cout<<ans;
    return 0;
}


