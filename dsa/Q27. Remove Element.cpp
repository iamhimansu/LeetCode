#include <algorithm>
#include <iostream>
#include <vector>
/**
 * Given an integer array nums and an integer val, remove all occurrences of val
 * in nums in-place. The order of the elements may be changed. Then return the
 * number of elements in nums which are not equal to val. Consider the number of
 * elements in nums which are not equal to val be k, to get accepted, you need
 * to do the following things: Change the array nums such that the first k
 * elements of nums contain the elements which are not equal to val. The
 * remaining elements of nums are not important as well as the size of nums.
 * Return k. Example 1: Input: nums = [3,2,2,3], val = 3 Output: 2, nums =
 * [2,2,_,_] Explanation: Your function should return k = 2, with the first two
 * elements of nums being 2. It does not matter what you leave beyond the
 * returned k (hence they are underscores).
 */

using namespace std;
class Solution {
public:
public:
  int removeElement(vector<int> &nums, int val) {
    size_t i = 0;
    size_t k = nums.size();
    size_t j = k;

    int total = 0;

    while (i < k) {

      if (nums.at(i) == val) {
        nums.at(i) = nums.at(k - 1);
        k--;
        total++;
      } else {
        i++;
      }
    }

    for (auto a : nums) {
      std::cout << a << " ";
    }
    cout << endl;
    return j - total;
  }
};

int main() {
  Solution s;
  vector<int> x{3, 2, 2, 3};
  std::cout << s.removeElement(x, 3) << std::endl;
}