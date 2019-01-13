class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int length = nums.length();
        book kreached = false;
        int currentk = 1;
        int currentMax = nums.at(0);
        for (int i = 1 ; i < length ; i++)
        {
            if (currentMax < nums.at(i))
            {
                currentk++;
                currentMax = nums.at(i);
            }
            else
            {
            }
        }
    }
};
