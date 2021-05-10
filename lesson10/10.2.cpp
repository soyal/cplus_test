#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::string;
using std::vector;


// int main()
// {
//   int a[]{1, 2, 3, 4};

//   std::cout << sizeof(a) / sizeof(*a) << std::endl;
// }

void printVector(vector<string> &vect) {
  std::cout << "size: " << vect.size() << "  ";

  for(auto str: vect) {
    std::cout << str << " ";
  }

  std::cout << std::endl;
}

int main()
{
  vector<string> strs{"the", "quick", "red", "fox", "jumps", "over", "the", "turtle"};

  std::sort(strs.begin(), strs.end());

  printVector(strs); // fox jumps over quick red the the turtle 

  // std::unique只会“移除”一串重复元素中的除第一个元素外的其他元素
  // unique并未真正删除元素，只是移动重复元素，将其放到了最末尾，虽然通过迭代器也不能访问，但是size不变
  auto end_unique = std::unique(strs.begin(), strs.end());

  printVector(strs); // fox jumps over quick red the turtle ; size: 8

  strs.erase(end_unique, strs.end());

  printVector(strs); // fox jumps over quick red the turtle ; size: 7
}