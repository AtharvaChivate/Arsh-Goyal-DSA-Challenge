#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0)
                nums[idx] *= -1;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] > 0)
                ans.emplace_back(i + 1);
        }
        return ans;
    }
};
// T.C --> O(2N), S.C --> O(1)

// class Solution
// {
//     public:
//         vector<int> findDisappearedNumbers(vector<int> &nums)
//         {
//             int n = nums.size();
//             vector<int> mpp(n+1, 0);
//             vector<int> ans;
//             for (int i = 0; i < n; i++)
//             {
//                 mpp[nums[i]]++;
//             }
//             for (int i = 1; i <= n; i++)
//             {
//                 if (mpp[i] == 0)
//                     ans.push_back(i);
//             }
//             return ans;
//         }
// };
// T.C ==> O(N), S.C ==> O(2N)