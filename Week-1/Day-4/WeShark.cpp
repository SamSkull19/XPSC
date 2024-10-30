#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <ll> v(n);
    vector <ll> odd;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    ll sum = 0;
    for(ll i : v){
        if(i % 2 != 0){
            odd.push_back(i);
        }
        else{
            sum += i;
        }
    }

    int od = odd.size();
    
    if(od % 2 == 0){
        for(ll i : odd){
            sum += i;
        }
    }
    else{
        for(int i = od-1; i>0; i--){
            sum += odd[i];
        }
    }

    cout << sum << endl;
    return 0;
}