#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map <int, int> mp;
    int x;

    for(int i=1; i<=4; i++){
        cin >> x;
        mp[x]++;
    }

    int mn = 0;
    for(auto [x, y] : mp){
        if(y > 1){
            mn += y-1;
        }
    }   

    cout << mn <<  endl;
    return 0;
}