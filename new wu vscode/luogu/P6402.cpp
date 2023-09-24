#include<bits/stdc++.h>
int n;
std::map<std::string,int> mp;
std::string name;
int main(){
    std::cin>>n;
    for(int i=1;i<=2*n-1;i++){
        std::cin>>name;
        mp[name]++;
    }
    for(auto mm:mp){
        if((mm.second)%2==1){
            std::cout<<mm.first;
            return 0;
        }
    }
    return 0;
}