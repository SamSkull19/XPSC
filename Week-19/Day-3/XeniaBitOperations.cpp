#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1 << 17 + 5;
int a[N], dp[N * 4];

int merge(int a, int b, int len){
    int x = 0;
    x = __lg(len);

    if(x & 1){
        return (a | b);
    }
    else{
        return (a ^ b);
    }
}

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
    dp[n] = merge(dp[l], dp[r], e - b + 1);
}

void update(int n, int b, int e, int i, int x){
    if(i < b || i > e){
        return;
    }
    if(b == e){
        dp[n] = x;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    dp[n] = merge(dp[l], dp[r], e - b + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    n = 1 << n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    build(1, 1, n);

    while(m--){
        int i, x;
        cin >> i >> x;
        update(1, 1, n, i, x);
        cout << dp[1] << endl;
    }
    return 0;
}