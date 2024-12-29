#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = (int)s.size();
    map <char, int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }

    int odd = 0;
    for(auto [x, y] : mp){
        if(y % 2 != 0){
            odd++;
        }
    }
    string a, b, m;
    if(odd > 1){
        cout << "NO SOLUTION" << endl;
    }

    else{
        for(auto [x, y] : mp){
            if(y % 2 == 0){
                while(y > 0){
                    a += x;
                    b += x;
                    y -= 2;
                }
            }
            else{
                while(y > 0){
                    m += x;
                    y--;
                }
            }
        }

        reverse(b.begin(), b.end());
        a += m + b;
        cout << a << endl;
    }
    return 0;
}