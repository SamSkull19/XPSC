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
    
    map <int, int> mp;
    for(int i=0; i<n; i++){
        int x = v[i];

        for(int j=1; j*j <= x; j++){
            if(x % j == 0){
                mp[j]++;
                if(x / j != j){
                    mp[x / j]++;
                }
            }
        }
    }

    int N = 1e5 + 5;
    int mx = 1;
    for(int i=2; i<=N; i++){
        mx = max(mx, mp[i]);
    }

    cout << mx << endl;
    return 0;
}