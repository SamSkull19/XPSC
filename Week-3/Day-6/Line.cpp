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
        string s;
        cin >> n >> s;

        ll sum = 0;
        vector <ll> v;
        vector <ll> ans;

        for(int i=0; i<n; i++){
            if(s[i] == 'L'){
                sum += i;
                v.push_back((n - 1 - i) - i);
            }
            
            if(s[i] == 'R'){
                sum += n-1-i;
                v.push_back(i - (n - 1 - i));
            }
        }
        // cout << sum << endl;

        sort(v.rbegin(), v.rend());

        int l=0;
        while(l < n){
            if(v[l] > 0){
                sum += v[l];
            }
            ans.push_back(sum);
            l++;
        }

        for(ll i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}