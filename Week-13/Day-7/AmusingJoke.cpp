#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, s, x;
    cin >> a >> b >> s;

    x = a + b;
    sort(s.begin(), s.end());
    sort(x.begin(), x.end());
    
    if(x == s) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}