#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        if (m > n)
            return -1;
        sort(a.begin(), a.end());
        long long minDiff = LLONG_MAX;
        for (long long i = 0; i + m - 1 < n; ++i)
        {
            long long currentDiff = a[i + m - 1] - a[i];
            minDiff = min(minDiff, currentDiff);
        }
        return minDiff;
    }
};
