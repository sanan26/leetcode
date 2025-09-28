class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int n : nums){
            if (val != n){
                nums[count] = n;
                count++;
            }
        }
        return count;
    }
};