#include <bits/stdc++.h>
int n,k,a[200][11],summ=0;
struct stru{
    int sum;
    int num;
};
stru b[200];
int cmp(stru m,stru n){
    if(m.sum!=n.sum) return m.sum>n.sum;
    return m.num<n.num;
}
void init(){
    std::cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            std::cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        summ=0;
        for(int j=1;j<=k;j++){
            summ+=a[i][j];
        }
        b[i].sum=summ;
        b[i].num=i;
    }
}
void work(){
    std::sort(b+1,b+1+n,cmp);
    std::cout<<b[1].num<<'\n'<<b[2].num;
}
int main(){
   init();
   work();
   return 0;
}
