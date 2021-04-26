#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::vector;

int main()
{
  vector<int> vec{1, 2, 3, 4, 4, 5, 6, 7, 8};
  vector<int> vec2{1,2,3};

  auto sum = std::accumulate(vec.cbegin(), vec.cend(), 0);

  auto equalResult = std::equal(vec2.begin(), vec2.end(), vec.begin());

  std::cout << "sum: " << sum << std::endl;

  std::cout << "equal result: " << equalResult << std::endl; // 1
}