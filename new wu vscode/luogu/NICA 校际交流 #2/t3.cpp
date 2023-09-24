#include <bits/stdc++.h>
long long a,b,c,d,e,f,k;
void init(){
    std::cin>>a>>b>>c;
    std::cin>>d>>e>>f;
    std::cin>>k;
}
void work(){
    if(((k/b))*a*c>((k/e))*d*f){
        std::cout<<((k/b))*a*c;
    }else{
        std::cout<<((k/e))*d*f;
    }
}
int main(){
   init();
   work();
   return 0;
}
