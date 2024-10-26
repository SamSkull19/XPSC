#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    set <pair<string, string>> s;

    for(int i=0; i<n; i++){
        string a, b;
        cin >> a >> b;
        s.insert({a, b});
    }

    cout << s.size() << endl;
    return 0;
}