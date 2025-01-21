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
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int l = 0, x = 0;
        while(l < m){
            if(a[x] == b[l]){
                x++;
            }
            l++;
        }
        cout <<  x << endl;
    }
    return 0;
}