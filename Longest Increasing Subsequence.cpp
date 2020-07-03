//O(nlogn) solution
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()<=1)   return nums.size();
        vector<int> last;
        for(int x:nums)
        {
            auto addr=lower_bound(last.begin(),last.end(),x); //Can explicitly write binary search instead of this
            if(addr==last.end())
                last.push_back(x);
            else
                *addr=x;
        }
        return last.size();   
    }
};
