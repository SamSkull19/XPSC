#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;

    if(n.size() != 4){
        int x = 4 - n.size();
        for(int i=0; i<x; i++){
            n.insert(n.begin(), '0');
        }
        cout << n << endl;
    }
    
    else{
        cout << n << endl;
    }
    return 0;
}