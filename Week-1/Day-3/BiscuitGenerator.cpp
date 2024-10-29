#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t;
    cin >> a >> b >> t;

    int biscuit = 0;
    for(float i = a; i <= (float)t+0.5; i+=a){
        biscuit += b;
    }

    cout << biscuit << endl;
    return 0;
}