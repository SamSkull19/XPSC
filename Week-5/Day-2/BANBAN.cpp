#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n;

        m = (n + 1) / 2;
        cout << m << endl;

        int l = 1, r = 3 * n;
        for(int i=1; i <= m; i++){
            cout << l << " " << r << " " << endl;
            l += 3; r -= 3;
        }
    }
    return 0;
}
