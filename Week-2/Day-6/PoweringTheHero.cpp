#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        priority_queue <ll> pq;
        ll sum = 0;

        for(int i=0; i<n; i++){
            ll x;
            cin >> x;

            if(x == 0 && !pq.empty()){
                sum += pq.top();
                pq.pop();
            }
            else{
                pq.push(x);
            }
        }
        cout << sum << endl;
    }
    return 0;
}