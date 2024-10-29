#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        
        int n = s.size();
        int lowerB = 0, upperB = 0;

        for(int i=n-1; i>=0; i--){
            if(s[i] == 'B'){
                s[i] = '#';
                upperB++;
                continue;
            }

            if(s[i] == 'b'){
                s[i] = '#';
                lowerB++;
                continue;
            }

            if(s[i] >= 'A' && s[i] <= 'Z' && upperB > 0){
                upperB--;
                s[i] = '#';
            }

            if(s[i] >= 'a' && s[i] <= 'z' && lowerB > 0){
                lowerB--;
                s[i] = '#';
            }
        }

        for(char i : s){
            if(i == '#') continue;
            cout << i;
        }
        cout << endl;
    }
    return 0;
}