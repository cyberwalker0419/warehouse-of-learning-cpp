#include <bits/stdc++.h>
int main(){
   long long y,w;
   char x,z;
   std::cin>>x>>y>>z>>w;
   if(x>='a'&&x<='z'&&z>='a'&&z<='z'&&x==z){
        if(y<=w){
            std::cout<<"valid\n";
            std::cout<<(w-y+1);
        }else{
            std::cout<<"valid\n";
            std::cout<<(y-w+1);
        }
   }else{
    std::cout<<"Invalid\n";
    std::cout<<-1;
   }
   return 0;
}
