#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector <ll> a(n), b(m);
    vector <ll> v;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int l = 0, r = 0;

    while(l < n && r < m){
        if(l < n && a[l] <= b[r]){
            v.push_back(a[l]);
            l++;
        }
        else{
            v.push_back(b[r]);
            r++;
        }
    }

    while(l < n){
        v.push_back(a[l]);
        l++;
    }
    while(r < m){
        v.push_back(b[r]);
        r++;
    }

    for(int i : v){
        cout << i << " ";
    }

    return 0;
}