#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll l, r;
        cin >> l >> r;

        if(l*2 > r){
            cout << -1 << " " << -1 << endl;
            continue;
        }

        ll d = r % l;
        r -= d;

        cout << l << " " << r << endl;
    }
    return 0;
} 