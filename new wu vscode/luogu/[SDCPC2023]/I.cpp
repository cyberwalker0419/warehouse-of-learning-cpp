#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int a, b;
    bool flag = false;
    int c[47][2] = {{3,  0},
                    {2,  2},
                    {2,  3},
                    {6,  0},
                    {0,  12},
                    {1,  4},
                    {1,  5},
                    {5,  2},
                    {1,  7},
                    {4,  7},
                    {0,  13},
                    {1,  8},
                    {1,  6},
                    {5,  3},
                    {1,  9},
                    {9,  0},
                    {5,  5},
                    {5,  6},
                    {1,  10},
                    {4,  5},
                    {0,  11},
                    {8,  2},
                    {0,  14},
                    {4,  6},
                    {8,  3},
                    {4,  9},
                    {0,  15},
                    {12, 0},
                    {8,  5},
                    {8,  6},
                    {4,  10},
                    {1,  11},
                    {1,  12},
                    {0,  6},
                    {0,  7},
                    {4,  4},
                    {0,  9},
                    {0,  10},
                    {0,  8},
                    {4,  8},
                    {4,  11},
                    {4,  12},
                    {0,  16},
                    {0,  17},
                    {2,  5},
                    {2,  6},
                    {0,  18}};
    std::cin >> a >> b;
    for (int i = 0; i < 47; i++) {
        if (a == c[i][0] && b == c[i][1]) {
            flag = true;
            break;
        }
    }
    if(flag){
        std::cout<<"Yes";
    }else{
        std::cout<<"No";
    }
    return 0;
}
