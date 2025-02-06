#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int mn = v[0], mx = v[0], cnt = 0;
    for(int i=1; i<n; i++){
        if(v[i] < mn){
            mn = v[i];
            cnt++;
        }
        if(v[i] > mx){
            mx = v[i];
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}