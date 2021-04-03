#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

// int main()
// {
//   string str("some string");

//   for(auto it = str.begin();it != str.end() && !isspace(*it);it++) {
//     *it = toupper(*it);
//   }

//   std::cout << str << std::endl;

//   return 0;
// }

// int main()
// {
//   vector<string> vstr(10);

//   for(auto it = vstr.cbegin(); it != vstr.cend() && !it->empty();++it ) {
//     std::cout << *it << std::endl;
//   }
// }

// 迭代器运算符
// int main()
// {
//   vector<int> intArr{0,1,2,3,4,5};

//   auto begin = intArr.begin();
//   auto secondP = begin + 3;

//   std::cout << *begin << std::endl;
//   std::cout << *secondP << std::endl;
//   std::cout << (begin < secondP) << std::endl;
//   std::cout << (secondP - begin) << std::endl;
// }

// 基于迭代器的二分查找
int main()
{
  vector<int> arr{1, 2, 3, 4, 7, 8, 9, 10};

  int sought = 11;

  auto begin = arr.begin();
  auto end = arr.end();
  auto mid = begin + (end - begin) / 2;

  while (mid != begin && mid != end && *mid != sought)
  {
    if (sought < *mid)
    {
      end = mid;
    }
    else
    {
      begin = mid;
    }
    mid = begin + (end - begin) / 2;
  }

  std::cout << "the result mid is " << *mid << std::endl;
}