#include <bits/stdc++.h>
#define N 100005
long long a[N]; 
int main(){
   long long n,f,sum=0;
   std::cin>>n;
   for(int i=1;i<=n;i++){
        std::cin>>f;
        if(a[f]==0){
            sum++;
        }
        a[f]++;
   }
   std::cout<<sum;
   return 0;
}
