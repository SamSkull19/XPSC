#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n);
        int one = 0;
        ll sum = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] == 1){
                one++;
            }
            sum += v[i];
        }      

        if(n == 1 || sum - one < n){
            cout << "NO" << endl;
        }        
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}