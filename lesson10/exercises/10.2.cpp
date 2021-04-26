#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

int main()
{
  vector<int> vec{1, 2, 3, 4, 4, 5, 6, 7, 8};

  auto result = std::count(vec.begin(), vec.end(), 4);

  std::cout << "result: " << result << std::endl;
}