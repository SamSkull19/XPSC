#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector <int> x = {1, 2, 4, 8, 16, 20};
    while(t--){
        int n;
        cin >> n;

        vector <int> v(n + 1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        bool flag = true;
        for(int i=0; i<5; i++){
            int a = x[i];
            int b = min(x[i + 1], n);

            for(int j=a + 1; j<b; j++){
                if(v[j] > v[j+1]){
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}