#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int minFromVector(vector<int> arr){
        int min = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] < arr[min]){
                min = i;
            }
        }
        return min;
    }

    void swap(int a, int b){
        int temp = b;
        b = a;
        a = temp;
    }

    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != nums[minFromVector(nums)]){
                swap(nums[i], nums[minFromVector(nums)]);
            }
        }
    }
    
};