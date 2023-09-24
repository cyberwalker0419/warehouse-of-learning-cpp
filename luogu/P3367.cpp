#include <bits/stdc++.h>

#define _for(i, a, b) for(int i=(a);i<=(b);i++)
#define N 10005

using namespace std;

int fathers[N];

//并查集
int find(int x) {
    return fathers[x] == x ? x : fathers[x] = find(fathers[x]);
}

int main() {
    int n, m, z, x, y;
    cin >> n >> m;
    _for(i, 1, n)fathers[i] = i;
    while (m--) {
        cin >> z >> x >> y;
        if (z == 1) {
            //合并
            fathers[find(x)] = find(y);
        } else if (z == 2) {
            //输出
            if (find(x) == find(y) ? cout << "Y" << endl : cout << "N" << endl);
        }
    }
    return 0;
}