class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices;
        int size = numbers.size();
        // cout << "size:" << size;
        // indices.push_back(1);
        // indices.push_back(2);
        
        int high = size-1;
        int low = 0;
        
        for (; high > low;)
        {
            int sum = numbers[low] + numbers[high];
            if(sum == target){
                indices.push_back(low+1);
                indices.push_back(high+1);
                break;
            }
            else if(sum > target){
                high--;
            }
            else{
                low++;
            }
        }
        return indices;
    }
};

