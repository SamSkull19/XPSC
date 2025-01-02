#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int k;
    cin >> k;

    while(k--){
        ll l, r;
        cin >> l >> r;

        ll a = 0, b = n-1, mid;
        ll L = n, R = -1;

        while(a <= b){
            mid = (a + b) / 2;

            if(l <= v[mid]){
                L = mid;
                b = mid - 1;
            }

            else{
                a = mid + 1;
            }
        }

        a = 0, b = n-1;
        while(a <= b){
            mid = (a + b) / 2;

            if(r >= v[mid]){
                R = mid;
                a = mid + 1;
            }

            else{
                b = mid - 1;
            }
        }
        cout << R - L + 1 << " ";
    }
    return 0;
}