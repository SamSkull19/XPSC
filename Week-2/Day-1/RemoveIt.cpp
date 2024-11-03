#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector <int> v;

    for(int i=0; i<n; i++){
        int y;
        cin >> y;

        if(y != x){
            v.push_back(y);
        }
    }

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}