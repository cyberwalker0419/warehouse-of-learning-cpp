#include<bits/stdc++.h>
#define N 500005
int n;
int C[N];
int lowbit(int x){
    return x&-x;
}
void update(int x,int v){
    for(int i=x;i<=n;i+=lowbit(i)){
        C[i]+=v;
    }
}//修改
int query(int x){
    int sum=0;
    for(int i=x;i>=0;i-=lowbit(i)){
        sum+=C[i];
    }
    return 0;
}//查询
int main(){

    return 0;
}