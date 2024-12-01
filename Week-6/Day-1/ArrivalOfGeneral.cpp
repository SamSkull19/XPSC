#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    int mx = 0, mn = INT_MAX;

    for(int i=0; i<n; i++){
        cin >> v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }

    int mxIdx = INT_MAX, mnIdx = 0;

    for(int i=0; i<n; i++){
        if(v[i] == mx){
            mxIdx = min(mxIdx, i);
        }
        if(v[i] == mn){
            mnIdx = max(mnIdx, i);
        }
    }
    
    if(mnIdx < mxIdx){
        cout << mxIdx + (n-1 - mnIdx) - 1 << endl;
    }
    else{
        cout << mxIdx + (n-1) - mnIdx << endl;
    }
    return 0;
}