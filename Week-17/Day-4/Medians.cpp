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
        int n, k;
        cin >> n >> k;

        if(n == 1){
            cout << 1 << endl << 1 << endl;
            continue;
        }

        if(k == 1 || k == n){
            cout << -1 << endl;
            continue;
        }

        int x = k - 1;
        int y = k + 1;

        if(x % 2 == 0){
            x--;
            y++;
        }
        
        cout << 3 << endl;
        cout << 1 << " " << x + 1 << " " << y << endl;
    }
    return 0;
}