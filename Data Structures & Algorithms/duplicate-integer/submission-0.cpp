class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(),nums.end());
        if(nums.size()==seen.size()){
            return false;
        }
        else{
            return true;
        }
    }
};