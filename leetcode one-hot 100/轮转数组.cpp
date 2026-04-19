class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int> dq(nums.size());
        for(int i=0;i<nums.size();i++){
            dq[i]=nums[i];
        }
        while(k--){
            int tmp=dq.back();
            dq.pop_back();
            dq.push_front(tmp);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=dq[i];
        }
    }
};


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s=nums.size();
        vector<int> p(nums.size());
        for(int i=0;i<nums.size();i++){
            p[(i+k)%s]=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        nums[i]=p[i];
    }    
};
