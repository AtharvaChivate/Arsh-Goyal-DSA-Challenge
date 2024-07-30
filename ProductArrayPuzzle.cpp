#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long productOfRest(vector<long long int> nums, int pos){
        long long product = 1;
        for(int i = 0; i<nums.size(); i++){
            if(i==pos) continue;
            product *= nums[i];
        }
        return product;
    }
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
    {

        vector<long long> ans(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = productOfRest(nums, i);
        }
        return ans;
    }
};
