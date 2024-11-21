#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        string s, x;
        cin >> n >> s;

        int r = n-1;
        while(r >= 0){
            if(r >= 2 && s[r] == '0'){
                int a = (s[r-2] - '0') * 10 + (s[r-1] - '0');
                x += (char)(96 + a);
                r -= 3;
            }

            else{
                int a = s[r] - '0';
                x += (char)(96 + a);
                r--;
            }
        }
        reverse(x.begin(), x.end());
        cout << x << endl;
    }
    return 0;
}