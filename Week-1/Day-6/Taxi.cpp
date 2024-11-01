#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n;
    int cnt[5] = {0};

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        cnt[x]++;
    }
    
    int ans = 0;
    ans += cnt[4];
    
    ans += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);

    ans += cnt[2] / 2;
    if(cnt[2] % 2 != 0){
        ans += 1;
        cnt[1] = max(0, cnt[1] - 2);
    }

    if(cnt[1] > 0){
        ans += (cnt[1] + 3) / 4;
    }
    
    cout << ans << endl;
    return 0;
}