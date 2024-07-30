#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string ans = "";
        // Process the columnNumber to build the result string
        while (columnNumber > 0)
        {
            // Adjust columnNumber to zero-based index
            columnNumber--;
            // Find the current character (0-based index)
            int remainder = columnNumber % 26;
            char letter = 'A' + remainder;

            // Prepend the character to the result string
            ans = letter + ans;

            // Update columnNumber for the next iteration
            columnNumber /= 26;
        }
        return ans;
    }
};