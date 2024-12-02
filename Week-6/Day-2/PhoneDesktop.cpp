#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        int a = (y + 1) / 2;
        int b = (x + (y * 4) + 14) / 15;
        int ans = max(a, b);
        cout << ans << endl;    
    }
    return 0;
}