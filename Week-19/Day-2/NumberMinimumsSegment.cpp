#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 5, INF = 1e9 + 10;
int a[N];

struct node{
    int mn, cnt;
};
node dp[N * 4];

node merge(node l, node r){
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.cnt = 0;

    if(l.mn == ans.mn){
        ans.cnt += l.cnt;
    }
    if(r.mn == ans.mn){
        ans.cnt += r.cnt;
    }
    return ans;
}

void build(int n, int b, int e){
    if(b == e){
        dp[n].mn = a[b];
        dp[n].cnt = 1;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    dp[n] = merge(dp[l], dp[r]);
}

void update(int n, int b, int e, int i, int x){
    if(i < b || i > e){
        return;
    }
    if(b == e){
        dp[n].mn = x;
        dp[n].cnt = 1;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    dp[n] = merge(dp[l], dp[r]);
}

node query(int n, int b, int e, int i, int j){
    if(e < i || j < b){
        return {INF, 1};
    }
    if(b >= i && e <= j){
        return dp[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    build(1, 1, n);
    while(m--){
        int x;
        cin >> x;

        if(x == 1){
            int idx, v;
            cin >> idx >> v;
            idx++;
            update(1, 1, n, idx, v);
        }

        else{
            int l, r;
            cin >> l >> r;
            l++;
            node ans = query(1, 1, n, l, r);
            cout << ans.mn << " " << ans.cnt << endl;
        }
    }
    return 0;
}