#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll a, b, c, x, y;
        cin >> a >> b >> c;

        x = a - 1;
        y = abs(b - c) + c - 1;

        if(x < y){
            cout << 1 << endl;
        }
        else if(x > y){
            cout << 2 << endl;
        }
        else{
            cout << 3 << endl;
        }
    }
    return 0;
}