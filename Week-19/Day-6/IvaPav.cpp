#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 2e5 + 5;
ll a[N], dp[4 * N];

void build(int n, int b, int e){
    if(b == e){
        dp[n] = a[b];
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    dp[n] = (dp[l] & dp[r]);
}

ll query(int n, int b, int e, int i, int j){
    if(e < i || b > j){
        return (1LL << 30) - 1;
    }
    if(b >= i && e <= j){
        return dp[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    return (query(l, b, mid, i, j) & query(r, mid + 1, e, i, j));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n;

        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        build(1, 1, n);
        
        cin >> m;
        while(m--){
            int x, k;
            cin >> x >> k;
        
            if(a[x] < k){
                cout << -1 << " ";
                continue;
            }

            int l = x, r = n, mid, ans = x;
            while(l <= r){
                mid = (l + r) / 2;

                ll currAnd = query(1, 1, n, x, mid);
                if(currAnd >= k){
                    ans = mid;
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}