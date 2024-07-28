#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static bool cmp(const pair<string, int> &p1, const pair<string, int> &p2)
    {
        return p1.second > p2.second;
    }

    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        int n = names.size();
        vector<pair<string, int>> ps(n);

        for (int i = 0; i < n; i++)
        {
            ps[i] = make_pair(names[i], heights[i]);
        }

        // Sort ps based on heights in decreasing order
        sort(ps.begin(), ps.end(), cmp);

        vector<string> sorted_names(n);
        for (int i = 0; i < n; i++)
        {
            sorted_names[i] = ps[i].first;
        }
        return sorted_names;
    }
};