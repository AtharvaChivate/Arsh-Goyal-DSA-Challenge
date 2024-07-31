#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        for (int num : nums)
        {
            mpp[num]++;
        }
        int maxOccurrence = 0;
        int result = -1;
        for (const auto &entry : mpp)
        {
            int num = entry.first;
            int count = entry.second;

            if (num % 2 == 0) // Check if the number is even
            {
                if (count > maxOccurrence || (count == maxOccurrence && num > result))
                {
                    maxOccurrence = count;
                    result = num;
                }
            }
        }
        return result;
    }
};

// T.C. ==> O(N), S.C. ==> O(N)