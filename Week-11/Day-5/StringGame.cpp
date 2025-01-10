#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t, s;
    cin >> t >> s;

    int n = (int)t.size(), m = (int)s.size();
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        v[i]--;
    }

    bool flag = false;
    auto ok = [&](int x){
        vector <bool> a(n);
        for(int i=0; i<=x; i++){
            a[v[i]] = true;
        }

        int j = 0;
        for(int i=0; i<n; i++){
            if(!a[i] && t[i] == s[j]){
                j++;
            }
            if(j == m){
                flag = true;
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n - 1, mid, ans = 0;
    while(l <= r){
        mid = (l + r) / 2;

        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    cout << (flag ? ans + 1 : ans) << endl;
    return 0;
}