#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int k = i % 4;
        if(k == 0 || k == 1){
            cout << 'a';
        }
        else{
            cout << 'b';
        }
    }
    return 0;
}