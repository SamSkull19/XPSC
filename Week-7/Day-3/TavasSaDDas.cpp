#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    ll len = n.size();
    ll cnt = 0;
    
    for(int i=1; i<len; i++){
        cnt += (1LL << i);
    }
    
    for(int i=0; i<len; i++){
        if(n[i] == '7'){
            cnt += (1LL << (len - i - 1));
        }
    }

    cout << cnt + 1 << endl;
    return 0;
}