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

        vector <int> v(n);
        vector <int> x;

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int l = 0;
        while(l < n){
            if(l == 0){
                x.push_back(abs(v[0] - v[1]));
            }
            else if(l == n-1){
                x.push_back(abs(v[n-1] - v[n-2]));
            }
            else{
                int a = abs(v[l] - v[l+1]);
                int b = abs(v[l] - v[l-1]);
                x.push_back(max(a, b));
            }
            l++;
        }
        sort(x.begin(), x.end());
        cout << x.front() << endl;
    }
    return 0;
}