#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

	while(t--){
		int n, l = 1;
		cin >> n;

		int x = 0, k = n;
		while(k){
			if(k % 10 > 0){
                x++;
            }
			k /= 10;
		}
		cout << x << endl;

		while(n){
			if(n % 10 != 0){ 
                cout<< n % 10 * l << " ";
            }
			n /= 10;
            l *= 10;
		}
		cout << endl;
	}
    return 0;
}