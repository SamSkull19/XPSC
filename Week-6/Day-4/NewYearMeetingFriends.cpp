#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int ans = max(x, max(y, z)) - min(x, min(y, z));
    cout << ans << endl;
    return 0;
}