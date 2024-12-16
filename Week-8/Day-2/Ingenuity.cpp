#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        map <char, int> mp;
        map <char, int> mpx;

        mpx['N'] = 0, mpx['S'] = 0;
        mpx['E'] = 1, mpx['W'] = 1;

        for (char c : s) { 
            mp[c]++;
        }

        if ((mp['N'] + mp['S']) % 2 != 0 || (mp['E'] + mp['W']) % 2 != 0){
            cout << "NO" << endl;
            continue;
        }
        
        if (n == 2 && (mp['N'] == 1 || mp['S'] == 1 || mp['E'] == 1 || mp['W'] == 1)){
            cout << "NO" << endl;
            continue;
        }

        for(char c : s){
            if(mpx[c] % 2 == 0){
                cout << 'H';
            }
            else{
                cout << 'R';
            }
            mpx[c]++;
        }
        cout << endl;
    }
    return 0;
}
