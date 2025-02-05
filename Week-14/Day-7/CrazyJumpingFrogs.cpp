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
        int n;
        cin >> n;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int odd = 0, even = 0;
        for(auto x : v){
            if(x % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        cout << max(even, odd) << endl;
    }
    return 0;
}