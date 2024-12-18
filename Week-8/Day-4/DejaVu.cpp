#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, q;
        cin >> n >> q;

        vector <int> v(n);
        vector <int> x;

        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<q; i++){
            int a;
            cin >> a;
            if(x.empty() || x.back() > a){
                x.push_back(a);
            }
        }

        for(int i=0; i<n; i++){
            for(int a : x){
                if(v[i] % (1 << a) == 0){
                    int s = a - 1;
                    v[i] += (1 << s);
                }
            }
        }   

        for(int i : v){
            cout << i << " ";
        }   
        cout << endl; 
    }
    return 0;
}