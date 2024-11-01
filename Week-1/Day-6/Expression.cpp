#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int mx = 0;
    
    mx = max(mx, a + (b * c));
    mx = max(mx, a * (b + c));
    mx = max(mx, a * b * c);
    mx = max(mx, (a + b) * c);
    mx = max(mx, (a * b) + c);
    mx = max(mx, a + b + c);

    cout << mx << endl;
    return 0;
}