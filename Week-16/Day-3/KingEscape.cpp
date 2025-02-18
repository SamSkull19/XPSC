#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d >> x >> y;

    if(a > c && a < x){
        cout << "NO" << endl;
    }

    else if(a < c && a > x){
        cout << "NO" << endl;
    }

    else if(b > d && b < y){
        cout << "NO" << endl;
    }
    
    else if(b < d && b > y){
        cout << "NO" << endl;
    }

    else{
        cout << "YES" << endl;
    }
    return 0;
}