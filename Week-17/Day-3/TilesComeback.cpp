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

        vector <int> v(n), s(n, 0);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        s[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            if(v[i] == v[n-1]){
                s[i] = s[i+1] + 1;
            }
            else{
                s[i] = s[i+1];
            }
        }
        
        if(v[0] == v[n-1]){
            if(s[0] % k == 0 || s[0] >= k){
                cout << "YES" << endl;
                continue;
            }
        }

        bool flag = false;
        int cnt = 1;
        for(int i=1; i<n; i++){
            if(v[i] == v[0]){
                cnt++;
            }
            if(cnt % k == 0 && s[i] >= k){
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}