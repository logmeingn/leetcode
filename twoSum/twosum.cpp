#include <iostream>
#include <vector>

class Solution{
   public:
      std::vector<int> twoSum(const std::vector<int>& list, int targetSum)
      {
	 std::vector<int> indices;
	 int ii = 0;
	 for(auto i = list.cbegin(); i != list.end(); i++, ii++)
	 {
	    int jj = ii+1;
	    for(auto j = i+1; j != list.end(); j++, jj++)
	    {
	       std::cout << "list[" << *i << "," << *j << "]" << std::endl;
	       if ( targetSum == *i + *j )
	       {
		  indices.push_back(ii);
		  indices.push_back(jj);
	       }
	    }
	 }
	 return indices;
      }
};

int main(void)
{
   std::vector<int> list = {1,2,3,4};

   Solution s;
   std::vector<int> indices = s.twoSum(list, 6);

   for (auto index : indices)
   {
      std::cout << "index:" << index << std::endl;
   }
   return 0;
}
