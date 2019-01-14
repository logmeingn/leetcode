class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int length = nums.size();
        int pivotPlace = 0;
        int lesserNumberIndex = 0;
        int higherNumberIndex = length-1;
        //while (pivotPlace != k)
        int i = 0;
        pivotPlace = placePivot(nums, lesserNumberIndex,higherNumberIndex);
        while ( i < 2)
        {
            i++;
            if(pivotPlace < k)
            {
                higherNumberIndex = pivotPlace-1;
                pivotPlace = placePivot(nums, lesserNumberIndex,higherNumberIndex);
            }
            else if(pivotPlace > k)
            {
                lesserNumberIndex = pivotPlace+1;
                pivotPlace = placePivot(nums, lesserNumberIndex, higherNumberIndex);
            }
        }
        return pivotPlace;
    }
    
    void printNums(const vector<int>& nums)
    {
        for (int i = 0 ; i < nums.size(); i++)
        {
            cout << nums.at(i) << ",";
        }
        cout << endl;
    }
    
    int placePivot(vector<int>& nums, int lesserNumberIndex, int higherNumberIndex)
    {
        cout << "----------------------------" << endl;
        cout << "higherNumberIndex :" << higherNumberIndex << endl;
        cout << "lesserNumberIndex :" << lesserNumberIndex << endl;
        printNums(nums);
        
        int pivotPos = 0;
        int i = 0;
        while ((higherNumberIndex >= lesserNumberIndex))
        {
            if (nums.at(pivotPos) < nums.at(higherNumberIndex) && (pivotPos < higherNumberIndex))
            {
                //swap values
                int tmpi = nums[pivotPos];
                nums[pivotPos] = nums[higherNumberIndex];
                nums[higherNumberIndex] = tmpi;
                pivotPos = higherNumberIndex;
                higherNumberIndex--;
            }
            else if((nums[pivotPos] > nums[lesserNumberIndex]) && (pivotPos > lesserNumberIndex) )
            {
                                //swap values
                int tmpi = nums[pivotPos];
                nums[pivotPos] = nums[lesserNumberIndex];
                nums[lesserNumberIndex] = tmpi;
                pivotPos = lesserNumberIndex;
                lesserNumberIndex++;
            }
            
            //cout << "Iteration : " << i++ << ":";
            //printNums(nums);
           //cout << "("<< pivotPos << ")"<< "("<< lesserNumberIndex << "," << higherNumberIndex << ")" << endl;
        }
        
            //cout << endl << "Final : " ;
            //printNums(nums);
        
       cout << endl << nums[pivotPos] << "is at " << pivotPos << endl;
        return pivotPos;
    }
};
