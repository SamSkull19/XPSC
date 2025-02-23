#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string s = "abcdefghijklmnopqrstuvwxyz";

    while(t--){
        int n, k;
        cin >> n >> k;

        string x = s.substr(0, k);
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cout << x[j];
            }
        }
        cout << endl;
    }
    return 0;
}