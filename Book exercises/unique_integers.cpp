#include <bits/stdc++.h>
using namespace std;

set<int> unique_numbers(vector<int>);

int main(){return 0;}

set<int> unique_numbers(vector<int> nums)
{
    set<int> unique_nums;
    for (int i = 0; i < nums.size(); ++i) unique_nums.insert(nums[i]);
    return unique_nums;
}