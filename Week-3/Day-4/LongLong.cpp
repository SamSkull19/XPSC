#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <ll> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += abs(v[i]);
        }

        int l = 0, r = 0, op = 0;

        while(l < n){
            if(v[l] < 0){
                r = l;
                while(r < n && v[r] <= 0){
                    r++;
                }
                op++;
                l = r;
            }
            else{
                l++;
            }
        }
        cout << sum << " " << op << endl;
    }
    return 0;
}