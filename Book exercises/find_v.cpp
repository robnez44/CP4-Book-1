#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool v_exists(vi, int);

int main(){return 0;}

bool v_exists(vi nums, int v){
    return binary_search(nums.begin(), nums.end(), v);
}