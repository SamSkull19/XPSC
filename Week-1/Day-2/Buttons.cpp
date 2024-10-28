#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int x = a + (a - 1);
    int y = b + (b - 1);
    int z = a + b;
    
    int m = max(x, y);
    int mx = max(m, z);

    cout << mx << endl;
    return 0;
}