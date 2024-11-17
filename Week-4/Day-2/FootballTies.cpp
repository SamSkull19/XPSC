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

        int a = x % 3;
        int b = y % 3;
        int mn = min(a, b);

        cout << mn << endl;
    }
    return 0;
}