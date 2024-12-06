#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);
        vector <int> b(n);
        map <int, int> mp;

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        
        for(int i=0; i<n; i++){
            mp[a[i]] = max(a[i], b[i]);
        }

        sort(a.rbegin(), a.rend());
        int mx = mp[a[0]];
        bool flag = false;

        for(int i=1; i<n; i++){
            if(mp[a[i]] > mx){
                flag = true;
                break;
            }
        }

        if(!flag){
            if(mx != mp[a[1]]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}