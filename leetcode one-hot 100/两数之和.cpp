class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> b(2,-1);
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
        for(int i=0;i<nums.size();i++){
            if((mp.count(target-nums[i])>0)&&(i!=mp[target-nums[i]]))
            {
                b[0]=i;
                b[1]=mp[target-nums[i]];
                break;
            }
        }
        return b;
    }
};
