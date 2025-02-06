#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int sum = 0, x = 5, ans = 0;
    for(int i=1; i<=n; i++){
        sum += (i * 5);
        if(sum + k > 240){
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}