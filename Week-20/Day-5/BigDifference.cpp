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
        ll n, k;
        cin >> n >> k;

        if(n <= k){
            cout << -1 << " " << -1 << endl;
            continue;
        }

        if(n % 2 == 0){
            if(n - 1 - k >= 2){
                cout << n-1 << " " << 2 << endl;
            }
            else{
                cout << -1 << " " << -1 << endl;
            }
        }

        else{
            if(n - k >= 2){
                cout << n << " " << 2 << endl;
            }
            else{
                cout << -1 << " " << -1 << endl;
            }
        }
    }
    return 0;
}