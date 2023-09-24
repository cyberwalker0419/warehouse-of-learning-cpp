#include<bits/stdc++.h>
#define N 100005
typedef long long ll;
ll a[N],b[N];
ll m,n,l,r;
void init(){
    std::cin>>n;
    for(ll i = 1 ; i <= n ; i ++)
	{
		std::cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
}
void work(){
    std::cin>>m;
    while(m--)
	{
		l=0; r=0;
		std::cin>>l>>r;
		std::cout<<b[r]-b[l]+a[l]<<std::endl;
	}
}
int main()
{
    init();
	work();
	return 0;
}