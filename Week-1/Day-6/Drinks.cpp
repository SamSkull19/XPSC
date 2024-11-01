#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n;

    int sum = 0;
    for(int i=1; i<=n; i++){
        cin >> x;
        sum += x;
    }   

    double ans = (double)sum / (double)n;
    cout << fixed << setprecision(12) << ans << endl; 
    return 0;
}