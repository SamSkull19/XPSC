#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int x, y, k;
        cin >> x >> y >> k;

        int a = (x + k - 1) / k;
        int b = (y + k - 1) / k;

        a = a * 2 - 1;
        b = b * 2;
        cout << max(a, b) << endl;
    }
    return 0;
}