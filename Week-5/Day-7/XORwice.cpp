#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b, XOR;
        cin >> a >> b;

        XOR = a ^ b;
        cout << XOR << endl;
    }
    return 0;
}