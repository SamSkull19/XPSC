#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 5;
ll a[N], dp[N * 4];

void build(int n, int b, int e){
    if(b == e){
        dp[n] = a[b];
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    dp[n] = __gcd(dp[l], dp[r]);
}

ll query(int n, int b, int e, int i, int j){
    if(i > e || j < b){
        return 0;
    }
    if(b >= i && e <= j){
        return dp[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    ll l_gcd = query(l, b, mid, i, j);
    ll r_gcd = query(r, mid + 1, e, i, j);
    return __gcd(l_gcd, r_gcd);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    build(1, 1, n);

    int mn = INT_MAX;
    for(int i=1; i<=n; i++){
        int l = i, r = n, mid;

        while(l <= r){
            mid = (l + r) / 2;
            ll currGCD = query(1, 1, n, i, mid);

            if(currGCD == 1){
                mn = min(mn, mid - i + 1);
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
    }

    if(mn == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << mn << endl;
    }
    return 0;
}