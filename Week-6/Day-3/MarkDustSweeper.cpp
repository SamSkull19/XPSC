#include<bits/stdc++.h>
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
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int x = 0;
        while(x < n && v[x] == 0){
            x++;
        }

        ll sum = 0, cnt = 0;
        for(int i=x; i<n-1; i++){
            if(v[i] == 0){
                cnt++;
            }
            else{
                sum += v[i];
            }
        }
        cout << sum + cnt << endl;
    }
    return 0;
}