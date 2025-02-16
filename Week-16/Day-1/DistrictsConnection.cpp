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

        vector <int> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        bool flag = false;
        for(int i=1; i<=n; i++){
            if(v[1] != v[i]){
                flag = true;
                break;
            }
        }

        if(!flag){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        int x = -1;
        for(int i=2; i<=n; i++){
            if(v[1] != v[i]){
                cout << 1 << " " << i << endl;
                x = i;
            }
        }

        for(int i=2; i<=n; i++){
            if(v[1] == v[i]){
                cout << x << " " << i << endl;
            }
        }
    }
    return 0;
}