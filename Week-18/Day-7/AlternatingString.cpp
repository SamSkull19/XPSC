#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        map <char, int> odd, even;
        for(int i=0; i<n; i++){
            if(i % 2 == 0) even[s[i]]++;
            else odd[s[i]]++;
        }

        if(n % 2 == 0){
            int mxOdd = 0, mxEven = 0;
            for(auto [x, y] : odd){
                mxOdd = max(mxOdd, y);
            }
            for(auto [x, y] : even){
                mxEven = max(mxEven, y);
            }
            int ans = n - mxOdd - mxEven;
            cout << ans << endl;
            continue;
        }

        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            if(i % 2 == 0) even[s[i]]--;
            else odd[s[i]]--;

            int mxOdd = 0, mxEven = 0;
            for(auto [x, y] : odd){
                mxOdd = max(mxOdd, y);
            }
            for(auto [x, y] : even){
                mxEven = max(mxEven, y);
            }

            int x = n - mxOdd - mxEven;
            ans = min(ans, x);

            if(i % 2 == 0) odd[s[i]]++;
            else even[s[i]]++;
        }
        cout << ans << endl;
    }
    return 0;
}