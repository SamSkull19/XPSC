#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool isPalindrome(string& s, int l, int r){
    while(l <= r){
        if(s[l++] != s[r--]){
            return false;
        }
    }
    return true;
}

void f(int idx, vector <vector<string>>& ans, vector <string>& a, string& s, int n){
    if(idx == n){
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<n; i++){
        if(isPalindrome(s, idx, i)){
            a.push_back(s.substr(idx, i-idx+1));
            f(i+1, ans, a, s, n);
            a.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector <vector<string>> ans;
    vector <string> a;
    int n = s.size();
    f(0, ans, a, s, n);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "aab";
    vector<vector<string>> ans = partition(s);

    for(auto i : ans){
        cout << "[ ";
        for(auto j : i){
            cout << j << " ";
        }
        cout << "]";
    }
    return 0;
}