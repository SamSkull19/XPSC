#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n);
        vector <int> o;

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector <string> s(n);
        int x;

        for(int i=0; i<n; i++){
            cin >> x >> s[i];
        }

        
        for(int i=0; i<n; i++){
            int cntD = 0, cntU = 0;

            for(char c : s[i]){
                if(c == 'U'){
                    cntU++;
                }
                if(c == 'D'){
                    cntD++;
                }
            }

            int a = (v[i] - cntU + cntD + 10) % 10;
            o.push_back(a);
        }

        for(int i : o){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}