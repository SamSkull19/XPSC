#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = 0, cnt = 0, sum = 0;
    while(r < n){
        sum += v[r];
        if(sum == x){
            cnt++;
            sum -= v[l];
            l++;
        }
        if(sum > x){
            while(l <= r && sum > x){
                sum -= v[l];
                l++;
            }
            if(sum == x){
                cnt++;
                sum -= v[l];
                l++;
            }
        }
        r++;
    }

    cout << cnt << endl;
    return 0;
}