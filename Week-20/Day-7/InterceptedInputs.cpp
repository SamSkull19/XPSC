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
        int k;
        cin >> k;

        set <int> s;
        for(int i=1; i<=k; i++){
            int x;
            cin >> x;
            s.insert(x);
        }

        int r = k - 2;
        int a, b;
        for(auto x : s){
            if(r % x == 0){
                int y = r / x;
                if(s.count(y)){
                    a = x;
                    b = y;
                    break;
                }
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}