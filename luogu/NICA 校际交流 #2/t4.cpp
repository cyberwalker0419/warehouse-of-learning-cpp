#include <bits/stdc++.h>
int x,h;
void init(){
    std::cin>>x>>h;
}
void work(){
    if(h==24){
        if(x<10){
            std::cout<<"Drizzle";
        }else if(x>=10&&x<25){
            std::cout<<"Moderate Rain";
        }else if(x>=25&&x<50){
            std::cout<<"Heavy Rain";
        }else if(x>=50){
            std::cout<<"Torrential Rain";
        }
    }else{
        if(x<10){
            if(x>=20){
                std::cout<<"Drizzle\n"<<"YES";
            }else{
                std::cout<<"Drizzle\n"<<"NO";
            }
            
        }else if(x>=10&&x<25){
            if(x>=20){
                std::cout<<"Moderate Rain\n"<<"YES";
            }else{
                std::cout<<"Moderate Rain\n"<<"NO";
            }
        }else if(x>=25&&x<50){
            if(x>=20){
                std::cout<<"Heavy Rain\n"<<"YES";
            }else{
                std::cout<<"Heavy Rain\n"<<"NO";
            }
        }else if(x>=50){
            if(x>=20){
                std::cout<<"Torrential Rain\n"<<"YES";
            }else{
                std::cout<<"Torrential Rain\n"<<"NO";
            }
        }
    }
}
int main(){
   init();
   work();
   return 0;
}
