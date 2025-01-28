#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0, sum = 0;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        
        sum += x;
        if(sum < 0){
            cnt++;
            sum = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}