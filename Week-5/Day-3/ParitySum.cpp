#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <ll> v(n);
        ll oddCnt = 0, evenCnt = 0, mxOdd = 0, mxEven = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] % 2 == 0){
                evenCnt++;
                mxEven = max(mxEven, v[i]);
            }
            else{
                oddCnt++;
                mxOdd = max(mxOdd, v[i]);
            }
        }

        sort(v.begin(), v.end());
        for(int i=0; i<n; i++){
            if(v[i] % 2 == 0 && v[i] < mxOdd){
                mxOdd += v[i];
            }   
        }
        
        if(oddCnt == 0 || evenCnt == 0){
            cout << 0 << endl;
        }

        else if(mxEven < mxOdd){
            cout << evenCnt << endl;
        }

        else{
            cout << evenCnt + 1 << endl;
        }
    }
    return 0;
}