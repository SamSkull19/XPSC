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
        int k, n, m;
        cin >> k >> n >> m;

        vector <int> a(n), b(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<m; i++){
            cin >> b[i];
        }

        vector <int> v;
        int len = n + m;
        int l = 0, r = 0;
        bool flag = false;

        while(len--){
            if(a[l] <= k && l < n){
                if(a[l] == 0){
                    k++;
                }
                v.push_back(a[l]);
                l++;
            }
            else if(b[r] <= k && r < m){
                if(b[r] == 0){
                    k++;
                }
                v.push_back(b[r]);
                r++;
            }
            else{
                flag = true;
                break;
            }
        }

        if(flag){ 
            cout << "-1";
        }
        else{
            for(int i: v){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}