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

        vector <ll> v(n);
        map <ll, ll> mp;
        ll sum = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
            sum += v[i];
        }

        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        priority_queue <ll> pq;
        pq.push(sum);
        bool flag = true;

        while(!pq.empty()){
            ll x = pq.top();
            pq.pop();

            ll a = x / 2;
            ll b = x - a;

            if(mp[a] > 0){
                mp[a]--;
            }
            else if(mp[a] == 0 && a > 1){
                pq.push(a);
            }
            
            if(mp[b] > 0){
                mp[b]--;
            }
            else if(mp[b] == 0 && b > 1){
                pq.push(b);
            }

            if(pq.size() > n + 2){
                flag = false;
                break;
            }
        }

        for(auto [i, j] : mp){
            if(j > 0){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}