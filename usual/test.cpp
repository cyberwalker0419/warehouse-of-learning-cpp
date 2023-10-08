#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int a[5][5]={
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25},
};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n=5,q=1;
    int b[5*5];
    for(int i=1;i<=n/2;i++){
            for(int j=i;j<=n-i;j++){
                b[q]=(a[i][j]);
                q++;
            }
            for(int j=i+1;j<=n-i;j++){
                b[q]=(a[i][j-1]);
                q++;
            }
            
        }
    return 0;
}