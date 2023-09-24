//集合例题
#include<bits/stdc++.h>
int n,x;
std::set<int> s[2];
void init(){
    std::ios::sync_with_stdio(false);
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>x;
        s[x].insert(i);
    }
}
void work(){
    while(true){
        if(s[1].empty()){
            for(auto ss:s[0]){
                printf("%d\n",ss);
            }
            return;
        }
        if(s[0].empty()){
            for(auto ss:s[1]){
                printf("%d\n",ss);
            }
            return;
        }
        int now=*s[0].begin()<*s[1].begin()?0:1,last=0;
        while(true){
            //it为迭代器
            auto it=s[now].lower_bound(last);
            if(it==s[now].end()){
                break;
            }
            printf("%d ",*it);
            last=*it;
            s[now].erase(it);
            now^=1;
        }
        printf("\n");
    }
}
int main(){
    init();
    work();
    return 0;
}