#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector <int> v = {100, 20, 10, 5, 1};
    int cnt = 0;

    for(int i=0; i<5; i++){
        cnt += n / v[i];
        n %= v[i];
        if(n == 0){
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}