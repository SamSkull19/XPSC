#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int query(int i, int j){
    cout << "? " << i << " " << j << endl << flush;
    int res;
    cin >> res;
    return res;
}

void printA(){
    cout << "! A" << endl  << flush;
}

void printB(){
    cout << "! B" << endl  << flush;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n + 1), freq(n + 1, 0);
        for(int i=1; i<=n; i++){
            cin >> v[i];
            freq[v[i]] = 1;
        }

        int m = -1;
        for(int i=1; i<=n; i++){
            if(freq[i] == 0){
                m = i;
                break;
            }
        }

        if(m != -1){
            int res = query(m, (m == 1 ? 2 : 1));

            if(res == 0){ 
                printA();
            }
            else{ 
                printB();
            }
        }

        else{
            int x, y;
            for(int i=1; i<=n; i++){
                if(v[i] == 1) x = i;
                if(v[i] == n) y = i;
            }

            int a = query(x, y);
            int b = query(y, x);

            if(min(a, b) >= n-1){
                printB();
            }
            else{
                printA();
            }
        }
    }
    return 0;
}