#include<bits/stdc++.h>
std::map<char,char> ch,in;
std::string a,b,c;
int main(){
    std::cin>>a>>b>>c;
    int l1=a.size(),l2=c.size();
    for(int i=0;i<l1;i++){
        if((ch.count(a[i])&&ch[a[i]]!=b[i])||(in.count(b[i])&&in[b[i]]!=a[i])){
            printf("Failed");
            return 0;
        }
        ch[a[i]]=b[i];
        in[b[i]]=a[i];
    }
    for(int i='A';i<='Z';i++){
        if(!ch.count(i)){
            printf("Failed");
            return 0;
        }
    }
    for(int i=0;i<l2;i++){
        std::cout<<ch[c[i]];
    }
    return 0;
}