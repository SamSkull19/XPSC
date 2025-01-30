#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = (int)s.size();
    vector <char> v;
    v.push_back(s[0]);
    int cnt = 0;

    for(int i=1; i<len; i++){
        if(!v.empty() && v.back() == s[i]){
            cnt++;
            v.pop_back();
        }
        else{
            v.push_back(s[i]);
        }
    }

    if(cnt % 2 == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}