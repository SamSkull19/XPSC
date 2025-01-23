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
        int x, n, m;
        cin >> x >> n >> m;

        int ans = x;
        while(x > 20 && n--){
            ans = ((ans / 2) + 10);
        }
        
        while(m--){
            ans = (ans - 10);
        }
        
        if(ans > 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}