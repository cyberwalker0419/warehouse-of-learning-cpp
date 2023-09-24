#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int gcd(int a, int b)
{
	return !b?a:gcd(b,a%b);
}

int lcm(int a, int b)
{
	int temp = a * b;
	temp = temp / gcd(a, b);
	return temp;
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    std::cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        std::cin>>n;
        std::vector<int> a(n);
        ll sum=1;
        for(int i=0;i<n;i++){
            std::cin>>a[i];
            sum*=a[i];
        }
        ll m=a[0];
        for(int i=1;i<=n;i++){
            m=gcd(m,a[i]);
        }
        ll s=a[0];
        for (int i = 1; i < n; i++){		
		    s = s * a[i] / gcd(s, a[i]);
	    }
        if(sum==s*m){
            std::cout<<"YES\n";
        }else{
            std::cout<<"NO\n";
        }
    }
    return 0;
}
