#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n][n];
    memset(arr, 0, sizeof(arr));

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        int a = i, b = i, c = x;
        while(c--){
            arr[a][b] = x;
            if(b != 0 && arr[a][b - 1] == 0){
                b--;
            }
            else{
                a++;
            }
        }
    }   

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}