#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    bool check = false;
    int x;
    
    for(int i=a; i<=b; i++){
        if(i % c == 0){
            check = true;
            x = i;
            break;
        }
    }

    if(check){
        cout << x << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}