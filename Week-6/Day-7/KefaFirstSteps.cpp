#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = 1, mx = 1;
    while(r < n){
        if(v[r-1] <= v[r]){
            mx = max(mx, r - l + 1);
        }
        else{
            l = r;
        }
        r++;
    }
    cout << mx << endl;
    return 0;
}

