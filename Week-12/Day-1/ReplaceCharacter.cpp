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
        string s;
        cin >> n >> s;

        map <char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        int mx = 0, mn = INT_MAX;
        char mxc, mnc;
        
        for(auto [x, y] : mp){
            if(y >= mx){
                mxc = x;
                mx = y;
            }
            if(y < mn){
                mnc = x;
                mn = y;
            }
        }

        for(int i=0; i<n; i++){
            if(s[i] == mnc){
                s[i] = mxc;
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}