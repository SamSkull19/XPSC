#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector <int> a, b;
        for(int i=0; i<n; i++){
            if(s[i] == 'A'){
                a.push_back(i+1);
            }
            if(s[i] == 'B'){
                b.push_back(i+1);
            }
        }

        int sz = (int)b.size();
        int x = sz - k;

        if(x == 0){
            cout << 0 << endl;
        }

        else if(x > 0){
            cout << 1 << endl;
            cout << b[x-1] << " " << 'A' << endl;
        }
        
        else{
            cout << 1 << endl;
            cout << a[-x-1] << " " << 'B' << endl;
        }
    }
    return 0;
}