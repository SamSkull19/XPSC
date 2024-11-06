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

        vector<int>v(n+1);
		for(int i=1; i<=n; i++){
			cin >> v[i];
		}

        int l=1, r = n;
        int mx = n, mn = l;

        while(l <= r){
            if(v[l] == mx){
                l++;
                mx--;
            }

            else if(v[l] == mn){
                l++;
                mn++;
            }
            
            else if(v[r] == mx){
                r--;
                mx--;
            }
            
            else if(v[r] == mn){
                r--;
                mn++;
            }
            
            else{
                break;
            }
        }

        if(l <= r){
            cout << l << " " << r << endl;
        }
        else{
            cout << -1 << endl;
        }

    }
    return 0;
}