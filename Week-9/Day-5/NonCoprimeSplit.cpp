#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int divisor(int n){
    for(int i=2; i*i <= n; i++){
        if(n % i == 0){
            return i;
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int l, r;
        cin >> l >> r;

        if(l == r){
            int x = divisor(l);
            if(x){
                cout << x << " " << l - x << endl;
            }
            else{
                cout << -1 << endl;
            }
            continue;
        }

        int x = (r % 2 == 0 ? r : r-1) - 2;
        int y = 2;

        int ans = __gcd(y, x);
        if(r <= 3 || ans == 1){
            cout << -1 << endl;
        }
        else{
            cout << x << " " << y << endl;
        }
    }
    return 0;
}