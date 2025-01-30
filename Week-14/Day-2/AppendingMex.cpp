#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    if(v[0] != 0){
        cout << 1 << endl;
    }

    else{
        bool flag = true;
        int x, c = 0;
        for(int i=0; i<n; i++){
            if(v[i] > c){
                flag = false;
                x = i+1;
                break;
            }
            else{
                if(v[i] == c){
                    c++;
                }
            }
        }

        if(flag) cout << -1 << endl;
        else cout << x << endl;
    }
    return 0;
}