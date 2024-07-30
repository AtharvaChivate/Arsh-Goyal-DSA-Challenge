#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int ans = 0;
        for (int i = 0; i < columnTitle.length(); i++)
        {
            // Convert character to its corresponding position (1-based)
            int value = columnTitle[i] - 'A' + 1;
            // Update the result with the current character's contribution
            ans = ans * 26 + value;
        }
        return ans;
    }
};