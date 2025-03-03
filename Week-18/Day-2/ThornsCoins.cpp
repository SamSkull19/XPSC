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
        int n;
        string s;
        cin >> n >> s;  

        int cnt = 0, coins = 0;
        for(auto x : s){
            if(x == '*'){
                cnt++;
            }
            else{
                cnt = 0;
            }
            
            if(x == '@'){
                coins++;
            }
            if(cnt >= 2){
                break;
            }
        }
        cout << coins << endl;
    }
    return 0;
}