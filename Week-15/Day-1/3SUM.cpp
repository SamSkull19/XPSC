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

        vector <int> v(n), x;
        map <int, int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];

            int r = v[i] % 10;
            if(mp[r] < 3){
                x.push_back(r);
                mp[r]++;
            }
        }

        bool flag = false;
        int len = (int)x.size();

        for(int i=0; i<len; i++){
            for(int j=i+1; j<len; j++){
                for(int k=j+1; k<len; k++){
                    int sum = x[i] + x[j] + x[k];
                    if(sum % 10 == 3){
                        flag = true;
                        break;
                    }
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}