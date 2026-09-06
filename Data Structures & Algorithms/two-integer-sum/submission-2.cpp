class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> seen;

        for(int i=0; i<nums.size(); i++){

            int x = nums[i];

            int needed = target - x;

            if(seen.find(needed)!= seen.end()){
                return {seen[needed],i};
            }   


            seen[x] = i;

        }

        return{};
        
    }
};
