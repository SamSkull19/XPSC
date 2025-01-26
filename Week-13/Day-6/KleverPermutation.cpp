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
        int n, k;
        cin >> n >> k;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            v[i] = i+1;
        }

        vector <int> ans(n);
        int l = 0, r = n-1;
        for(int i=0; i<k; i++){
            for(int j=i; j<n; j+=k){
                if(i % 2 == 0){
                    ans[j] = v[l];
                    l++;
                }
                else{
                    ans[j] = v[r];
                    r--;
                }
            }
        } 

        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}