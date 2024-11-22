#include<bits/stdc++.h>
using namespace std;

int lenOfLongestSubarr(vector <int> arr, int k) {
    int ans = 0;
    int n = arr.size();
    long long sum = 0;

    map <long long, int> mp;
    mp[0] = -1;
    
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum == k){
            ans = max(ans, i + 1);
        }
        
        auto it = mp.find(sum - k);
        if(it != mp.end()){
            ans = max(ans, i - it->second);
        }
        
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int x = lenOfLongestSubarr(v, k);
    cout << x << endl;
    
    return 0;
}