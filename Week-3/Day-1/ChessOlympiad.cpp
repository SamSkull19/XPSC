#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float x, y, z;
    cin >> x >> y >> z;

    float s = 4 - (x + y + z);
    float p1 = x * 1 + y * 0.5 + s * 1;
    float p2 = z * 1 + y * 0.5;

    if(p1 > p2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}