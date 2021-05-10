/**
 * 定制操作
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::string;
using std::vector;

int main()
{
  // int num = 1;
  // // lambda表达式
  // auto fc = [num](int a, int b) { return a + b + num; };

  // std::cout << "fc result: " << fc(1, 2) << std::endl;

  // find_if
  vector<int> vec{1, 2, 3, 4};

  auto res = std::find_if(vec.begin(), vec.end(), [](int num) { return num > 3; });

  std::cout << "res: " << *res << std::endl;
}