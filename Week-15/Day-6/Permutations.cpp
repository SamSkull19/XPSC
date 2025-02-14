#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void perm(vector <int>& nums, vector <int>& a, vector <vector<int>>& ans, vector <int>& freq){
    if(nums.size() == a.size()){
        ans.push_back(a);
        return;
    }

    for(int i=0; i<nums.size(); i++){
        if(freq[i] == 0){
            a.push_back(nums[i]);
            freq[i] = 1;
            perm(nums, a, ans, freq);
            freq[i] = 0;
            a.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector <vector<int>> ans;
    vector <int> a;
    vector <int> freq(nums.size(), 0);

    perm(nums, a, ans, freq);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> v = {1, 2, 3};
    vector <vector<int>> ans = permute(v);

    for(auto i : ans){
        cout << "[ ";
        for(auto j : i){
            cout << j << " ";
        }
        cout << "]";
    }
    return 0;
}