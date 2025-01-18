#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v;
    if(n % 2 != 0){
        v.push_back(3);
        n -= 3;
    }
    else{
        v.push_back(2);
        n -= 2;
    }

    while(n > 0){
        v.push_back(2);
        n -= 2;
    }
    
    cout << (int)v.size() << endl;
    sort(v.begin(), v.end());

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}