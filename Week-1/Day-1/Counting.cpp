#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, count = 0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        count++;
    }
    cout << count << endl;
    return 0;
}   