#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        if(v[n-1] == 1){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;

        vector<int> ans;
        for(int i = n-1; i>-1; i--){
            if(v[i] == 0){
                if(i == 0 || v[i-1] == 0){
                    ans.push_back(0);
                }

                else if(v[i-1] == 1){
                    int cnt = 0;
                    int l = i-1;
                    int x, temp;

                    while(l > -1 and v[l] == 1){
                        cnt++;
                        x = l;
                        l--;
                    }

                    temp = cnt;
                    while(cnt--){
                        ans.push_back(0);
                    }

                    ans.push_back(temp);
                    i = x + 1;
                }
            }
        }
        
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}