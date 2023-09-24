#include<bits/stdc++.h>
int n,x;
std::set<int> s;
void init(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        s.insert(x);
    }
}
void work(){
    printf("%d\n",s.size());
    for(auto ss:s){
        printf("%d ",ss);
    }
}
int main(){
    init();
    work();
    return 0;
}