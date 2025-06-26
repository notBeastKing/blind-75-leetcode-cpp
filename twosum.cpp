#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
        vector<int> res;
        int vec_len = nums.size();

        for(int i = 0 ; i < vec_len-1; i++)
        {
            for(int j = 1; j < vec_len; j++)
            {
                if(nums[i] > target || nums[2] > target)
                {
                    continue;
                }
                else if(nums[i] + nums[j] == target)
                {
                    vector<int> res = {i,j};
                    break;
                }
            }
        }

        return res;
}

int main(){
    vector<int> cases = {2, 7, 11, 15};
    vector<int> ans = twoSum(cases ,9);

    for(int &i : ans)
    {
        cout<<i;
    }
}
