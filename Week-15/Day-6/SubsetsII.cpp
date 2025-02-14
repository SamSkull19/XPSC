#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool check(vector <vector<int>>& ans, vector <int>& a){
    for(auto i : ans){
        if(i == a){
            return true;
        }
    }
    return false;
}

void subsetFind(int idx, vector <vector<int>>& ans, vector <int>& a, vector<int>& nums, int n){
    if(n == idx){
        if(!check(ans, a)){
            ans.push_back(a);
        }
        return;
    }

    subsetFind(idx + 1, ans, a, nums, n);
    a.push_back(nums[idx]);
    subsetFind(idx + 1, ans, a, nums, n);
    a.pop_back();
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector <vector<int>> ans;
    vector <int> a;
    int n = nums.size();

    subsetFind(0, ans, a, nums, n);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> v = {1, 2, 2};
    vector<vector<int>> ans = subsetsWithDup(v);

    for(auto i : ans){
        cout << "[ ";
        for(auto j : i){
            cout << j << " ";
        }
        cout << "]";
    }
    return 0;
}