#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << "I hate ";
    for(int i=2; i<=n; i++){
        if(i % 2 == 0){
            cout << "that I love ";
        }
        else{
            cout << "that I hate ";
        }
    }
    cout << "it";
    return 0;
}