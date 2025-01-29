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
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 0  && b == 0 && c == 0){
            cout << 0 << endl;
            continue;
        }

        int x = a + b + c;
        if(x % 2 != 0){
            cout << -1 << endl;
        }
        
        else{
            int mn = min(x / 2, a + b);
            cout << mn << endl;
        }
    }
    return 0;
}