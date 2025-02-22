#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector <int> v(30, 0);

    auto checkSum = [&](int x){
        for(int i=29; i>=0; i--){
            int s = (1 << i);
            int d = min(x / s, v[i]);
            x -= s * d;
        }
        return x == 0;
    };

    while(t--){
        int a, b;
        cin >> a >> b;

        if(a == 1){
            v[b]++;
        }
        else{
            bool check = checkSum(b);
            if(check) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}