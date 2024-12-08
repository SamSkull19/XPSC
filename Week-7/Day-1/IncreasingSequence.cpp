#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        int mxBit = __lg(n);

        deque <ll> dq;
        for(int i=0; i <= mxBit; i++){
            if((n >> i) & 1){
                ll val = n - (1LL << i);
                if(val > 0){
                    dq.push_front(val);
                }
            }
        }   
        dq.push_back(n);
        cout << dq.size() << endl;
        
        for(auto x : dq){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}