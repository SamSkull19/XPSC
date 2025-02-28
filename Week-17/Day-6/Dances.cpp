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
        int n, m;
        cin >> n >> m;

        vector <int> a(n), b(n);
        a[0] = m;
        for(int i=1; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int l = 0, r = 0, cnt = 0;

        while(l < n && r < n){
            if(a[l] < b[r]){
                l++, r++;
                cnt++;
            }
            else{
                r++;
            }
        }
        cout << n - cnt << endl;
    }
    return 0;
}