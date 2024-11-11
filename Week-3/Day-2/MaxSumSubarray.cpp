#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = 0;
    long long mx = 0, sum = 0;

    while(r < n){
        sum += v[r];
        if(r - l + 1 == k){
            mx = max(mx, sum);
            sum -= v[l];
            l++;
            r++;
        }
        else{
            r++;
        }
    }
    cout << mx << endl;
    return 0;
}