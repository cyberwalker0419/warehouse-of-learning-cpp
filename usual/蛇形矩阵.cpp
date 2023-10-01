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
    std::vector<std::vector<int> > q(n+1,std::vector<int>(n+1));    
    int dx[4]={-1,0,1,0}, dy[4]={0,1,0,-1};
    int x=0,y=0,d=1;
    for(int i=1;i<=n*n;i++)
    {
        q[x][y]=i;
        int a=x+dx[d],b=y+dy[d];
        if(a<0||a>=n||b<0||b>=n||q[a][b])
        {
            d=(d+1)%4;
            a=x+dx[d],b=y+dy[d];
        }
        x=a,y=b;
    }
    
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
            std::cout<<q[i][j]<<" ";
         }
        std::cout<<std::endl;
    }
    return 0;
}
