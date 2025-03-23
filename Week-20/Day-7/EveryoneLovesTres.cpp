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

        if(n == 1 || n == 3){
            cout << -1 << endl;
            continue;
        }

        if(n % 2 == 0){
            for(int i=1; i<=n-2; i++){
                cout << 3;
            }
            cout << 66 << endl;
        }
        else{
            for(int i=1; i<=n-5; i++){
                cout << 3;
            }
            cout << 36366 << endl;
        }
    }
    return 0;
}