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

        vector <int> v(n);
        int cnt = 0, coins = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];

            if(v[i] >= k){
                coins += v[i];
            }

            if(v[i] == 0 && coins > 0){
                cnt++;
                coins--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}