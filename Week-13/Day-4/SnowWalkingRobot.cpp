#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while(q--){
        string s;
        cin >> s;

        int l=0, r=0, u=0, d=0;
        for(auto i : s){
            if(i == 'L') l++;
            if(i == 'R') r++;
            if(i == 'U') u++;
            if(i == 'D') d++;
        }

        int x = min(l, r);
        int y = min(u, d);

        if(x > 0 && y > 0){
            cout << 2 * (x + y) << endl;

            for(int i=1; i<=x; i++){
                cout << 'L';
            }

            for(int i=1; i<=y; i++){
                cout << 'U';
            }

            for(int i=1; i<=x; i++){
                cout << 'R';
            }

            for(int i=1; i<=y; i++){
                cout << 'D';
            }
            cout << endl;
        }

        else{
            if(x > 0){
                cout << 2 << endl;
                cout << "LR" << endl;
            }
            else if(y > 0){
                cout << 2 << endl;
                cout << "UD" << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}