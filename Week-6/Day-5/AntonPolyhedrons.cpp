#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        cin >> s;
        if(s == "Tetrahedron") cnt += 4;
        if(s == "Cube") cnt += 6;
        if(s == "Octahedron") cnt += 8;
        if(s == "Dodecahedron") cnt += 12;
        if(s == "Icosahedron") cnt += 20;
    }
    cout << cnt << endl;
    return 0;
}