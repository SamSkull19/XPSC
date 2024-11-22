#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k){
    int l = 0, r = 0, ans = -1;
    int n = s.size();
    map <char, int> mp;

    while(r < n){
        mp[s[r]]++;

        if(mp.size() == k){
            ans = max(ans, r - l + 1);
        }

        else{
            while(mp.size() > k && l <= r){
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string s;
    cin >> s >> k;

    int x = longestKSubstr(s, k);
    cout << x << endl;
    return 0;
}