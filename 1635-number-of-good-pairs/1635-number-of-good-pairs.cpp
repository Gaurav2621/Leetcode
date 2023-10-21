class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int nl=nums.size(),count=0;
        for(int i=0 ; i<nl;i++){
            for(int j=1;j<nl;j++){
                if(nums[i]==nums[j] && i<j)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};