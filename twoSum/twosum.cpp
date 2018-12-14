#include<iostream>
#include<vector>

class Solution{
   public:
      std::vector<int> twoSum(std::vector<int>& list, int target)
      {
	 std::vector<int> indices{1,2};

	 return indices;
      }
};

int main(void)
{
   Solution s;
   std::vector<int> list{1,2,3,4};
   std::vector<int> indices = s.twoSum(list, 5);

   for (const int& i : indices)
   {
      std::cout << "i:" << i << std::endl;
   }
}
