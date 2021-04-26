#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::vector;

int main()
{
  vector<int> vec{1,2,3,4};

  std::fill_n(vec.begin(), vec.size(), 0);

  for(auto &num:vec) {
    std::cout << num << std::endl;
  }
}