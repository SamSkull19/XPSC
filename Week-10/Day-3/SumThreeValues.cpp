#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;

    vector <pair<ll, ll>> v(n);
    vector <ll> ans;

    for(int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        ll sum = k - v[i].first;
        int l = i+1, r = n-1;
        bool flag = false;

        while(l < r){
            ll x = v[l].first + v[r].first;
            if(x == sum){
                ans.push_back(v[i].second);
                ans.push_back(v[l].second);
                ans.push_back(v[r].second);
                flag = true;
                break;
            }

            else if(x < sum){
                l++;
            }

            else{
                r--;
            }
        }

        if(flag){
            break;
        }
    }

    if((int)ans.size() == 0){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        sort(ans.begin(), ans.end());
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}