#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int l = 1, r = n;

    for(int i=1; i<=m; i++){
        int x;
        string s, z;
        cin >> z >> z >> s >> z >> x;

        if(s == "left"){
            r = min(r, --x);
        }
        else if(s == "right"){
            l = max(l, ++x);
        }
    }

    if(l > r){
        cout << -1 << endl;
    }
    else{
        cout << r - l + 1 << endl;
    }
    return 0;
}