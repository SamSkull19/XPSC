#include<bits/stdc++.h>
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

        vector <int> freq(30, 0);
        for(int mask = 0; mask < n; mask++){
            int x = v[mask];

            for(int k = 0; k < 30; k++){
                if((x >> k) & 1){
                    freq[k]++;
                }
            }
        }

        for(int i=1; i<=n; i++){
            bool flag = true;

            for(int k=0; k < 30; k++){
                if(freq[k] % i != 0){
                    flag = false;
                    break;
                }
            }

            if(flag){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}