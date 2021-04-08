#include <iostream>
#include <string>
#include <stdexcept>

using std::range_error;
using std::runtime_error;
using std::string;

// int main()
// {
//   int a = 1;

//   auto result = sizeof(a);

//   std::cout << result << std::endl;
// }

// 布尔隐式转换
// int main()
// {
//   int a = 0;
//   int *p = nullptr;
//   char c = 1;

//   if(c) {
//     std::cout << "ok" << std::endl;
//   }
// }

// 显式转化
// int main()
// {
//   int a = 2, b = 4;
//   double c = static_cast<double>(a) / b;

//   std::cout << c << std::endl;
// }

// throw error
int main()
{
  int num = 1;

  std::cout << "please input a num:";
  std::cin >> num;

  if (num == 2)
  {
    try
    {
      throw runtime_error("num equal 2 is error");
    }
    catch (range_error err)
    {
      std::cout << "range_error" << std::endl;
      std::cout << err.what() << std::endl;
    }
    catch (runtime_error err)
    {
      std::cout << "runtime_error" << std::endl;
      std::cout << err.what() << std::endl;
    }
  }
}