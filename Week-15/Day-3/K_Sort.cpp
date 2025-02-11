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
        cin >> n;

        vector <int> v(n);
        priority_queue <int, vector<int>, greater<int>> pq;

        for(int i=0; i<n; i++){
            cin >> v[i];
            if(i > 0){
                if(v[i-1] > v[i]){
                    int x = v[i-1] - v[i];
                    v[i] += x;
                    pq.push(x);
                }
            }
        }

        ll ans = 0;
        int s = 0;
        while(!pq.empty()){
            int x = pq.top();
            int sz = (int)pq.size();
            pq.pop();
            
            x -= s;
            ans += (1LL * (sz + 1) * x);
            s += x;
        }

        cout << ans << endl;
    }
    return 0;
}