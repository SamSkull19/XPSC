#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, s, tSum = 0;
        cin >> n >> s;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            tSum += v[i];
        }

        if(tSum < s){
            cout << -1 << endl;
        }

        else if(tSum == s){
            cout << 0 << endl;
        }

        else{
            int l = 0, r = 0;
            int sum = 0, mx = 0;

            while(r < n){
                sum += v[r];

                if(sum == s){
                    mx = max(mx, r - l + 1);
                }

                while(sum > s){
                    sum -= v[l];
                    l++;
                }

                if(sum == s){
                    mx = max(mx, r - l + 1);
                }
                r++;
            }

            cout << n - mx << endl;
        }
    }
    return 0;
}