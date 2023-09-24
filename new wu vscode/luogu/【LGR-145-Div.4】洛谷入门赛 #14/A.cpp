#include<bits/stdc++.h>
int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    if((a+b+c)<=100&&(b%5==0)&&(c%7==0)&&((a-b)>(b-c))){
        std::cout<<"Yes";
    }else{
        std::cout<<"No";
    }


    return 0;
}