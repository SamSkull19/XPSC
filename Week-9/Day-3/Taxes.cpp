#include<bits/stdc++.h>
using namespace std;

bool is_Prime(int n){
    if(n == 1){
        return false;
    }
    else{
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(is_Prime(n)){
        cout << 1 << endl;
    }
    
    else if(n % 2 == 0 || is_Prime(n-2)){
        cout << 2 << endl;
    }
    
    else{
        cout << 3 << endl;
    }
    return 0;
}