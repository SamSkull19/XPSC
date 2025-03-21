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
        int n;
        cin >> n;

        vector <int> v(n);
        for(int &x : v){
            cin >> x;
        }

        sort(v.begin(), v.end());
        string s = "YES";

        for(int i=0; i<n; i+=2){
            if(v[i] != v[i + 1]){
                s = "NO";
                break;
            }
            if(i + 3 < n){
                v[i + 2] = max(v[i], v[i + 2]);
                v[i + 3] = max(v[i], v[i + 3]);

                if(v[i + 2] == v[i]) v[i + 2]++;
                if(v[i + 3] == v[i]) v[i + 3]++;
            }
        }
        cout << s << endl;
    }
    return 0;
}