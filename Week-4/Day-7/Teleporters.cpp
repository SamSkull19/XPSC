#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, c;
        cin >> n >> c;

        vector <ll> v(n);
        vector <ll> x;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] + (i+1) <= c){
                x.push_back(v[i]+(i+1));
            }
        }
        if(x.empty()){
            cout << 0 << endl;
        }
        else{
            sort(x.begin(), x.end());
            ll sum = 0, cnt = 0;

            for(auto i : x){
                sum += i;
                if(sum > c){
                    break;
                }
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}