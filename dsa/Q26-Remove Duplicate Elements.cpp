#include <iostream>
#include <vector>
/**
* 26. Remove Duplicates from Sorted Array
Given an integer array nums sorted in non-decreasing order, remove the
duplicates in-place such that each unique element appears only once. The
relative order of the elements should be kept the same. Then return the number
of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you
need to do the following things:

    Change the array nums such that the first k elements of nums contain the
unique elements in the order they were present in nums initially. The remaining
elements of nums are not important as well as the size of nums. Return k.
*/
using namespace std;
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    size_t i = 0;
    for (auto x : nums) {
      if (x != nums.at(i)) {
        nums.at(++i) = x;

      }
    }
    for (auto z : nums) {
      std::cout << z;
    }
    std::cout << std::endl;
    return i + 1;
  }
};

int main() {
  Solution s;
  vector<int> x{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  std::cout << s.removeDuplicates(x) << std::endl;
}