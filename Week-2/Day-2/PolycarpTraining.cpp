#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    int k = 1;

    for(int i=0; i<v.size(); i++){
        if(v[i] >= k){
            k++;
        }
    }
    cout << k-1 << endl;
    return 0;
}