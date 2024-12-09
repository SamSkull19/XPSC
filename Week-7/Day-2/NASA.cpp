#include<bits/stdc++.h>
using namespace std;

const int mxNum = (1LL << 15);
vector <int> palindrome;

bool checkPalindrome(int x){
    string s = to_string(x);
    int n = s.size();

    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

void palindromeNum(){
    for(int i=0; i<mxNum; i++){
        if(checkPalindrome(i)){
            palindrome.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    palindromeNum();

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n);
        vector <int> cnt(mxNum + 1);

        for(int i=0; i<n; i++){
            cin >> v[i];
            cnt[v[i]]++;
        }

        long long ans = n;
        for(int i=0; i<n; i++){
            for(int j=0; j<palindrome.size(); j++){
                int x = (v[i] ^ palindrome[j]);
                ans += cnt[x];
            }
        }

        cout << ans / 2 << endl;
    }
    return 0;
}