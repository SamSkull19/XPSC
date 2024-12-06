#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int cnt = 0;
    while(true){
        bool flag = true;

        for(int i=0; i<n; i++){
            if(v[i] % 2 != 0){
                flag = false;
                break;  
            }
        }

        if(!flag) break;
        for(int i=0; i<n; i++){
            v[i] /= 2;
        }
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P