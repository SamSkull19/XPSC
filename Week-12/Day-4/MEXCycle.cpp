#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool check(int a, int b){
    return abs(a - b) % 2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        x--, y--;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            v[(x + i) % n] = i % 2;
        }

        if(n % 2 != 0 || !check(x, y)){
            v[x] = 2;
        }

        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}