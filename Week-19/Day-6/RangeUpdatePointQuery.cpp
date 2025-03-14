#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 2e5 + 10;
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
    dp[n] = dp[l] + dp[r];
}

ll query(int n, int b, int e, int i, int j){
    if(e < i || b > j){
        return 0;
    }
    if(b >= i && e <= j){
        return dp[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void update(int n, int b, int e, int i, ll v){
    if(i > e || i < b){
        return;
    }
    if(b == e){
        dp[n] = v;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    dp[n] = dp[l] + dp[r];
}

ll sumDigits(ll x){
    ll sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        set <int> s;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            if(a[i] > 9){
                s.insert(i);
            }
        }
        build(1, 1, n);

        while(q--){
            int x;
            cin >> x;

            if(x == 1){
                int l, r;
                cin >> l >> r;

                int idx = l;
                while(!s.empty()){
                    auto it = s.lower_bound(idx);
                    if(it == s.end() || *it > r){
                        break;
                    }

                    a[*it] = sumDigits(a[*it]);
                    update(1, 1, n, *it, a[*it]);

                    int p = *it;
                    s.erase(it);

                    if(a[p] > 9) s.insert(p);
                    idx = p + 1;
                }
            }
            else{
                int s;
                cin >> s;
                ll ans = query(1, 1, n, s, s);
                cout << ans << endl;
            }
        }
    }
    return 0;
}