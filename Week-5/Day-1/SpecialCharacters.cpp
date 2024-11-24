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

        if(n%2 != 0){
            cout << "NO" << endl;
        }

        else{
            cout << "YES" << endl;
            for(int i=1; i<=n; i+=2){
                cout << "AAB";
            }
            cout << endl;
        }
     }
    return 0;
}