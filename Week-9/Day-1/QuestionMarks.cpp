#include<bits/stdc++.h>
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
        for(int i=0; i<n*4; i++){
            mp[s[i]]++;
        }

        int sum = 0;
        for(auto [x, y] : mp){
            if(x != '?'){
                sum += min(y, n);
            }
        }
        cout << sum << endl;
    }
    return 0;
}