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
        
        sort(s.begin(), s.end());
        int l=0, r = n-1;
        
        while(l < r){
            cout << s[l] << s[r];
            l++;
            r--;
        }
        if(l == r){
            cout << s[l];
        }
        cout << endl;
    }
    return 0;
}