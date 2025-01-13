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
        int n, k;
        cin >> n >> k;

        vector <int> v;
        int x = n;
        int d = k - 1, c = 1;

        for(int i=0; i<n; i++){
            if(d <= n && i == d){
                v.push_back(c);
                c++;
                d += k;
            }
            else{
                v.push_back(x);
                x--;
            }
        }

        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}