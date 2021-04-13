#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using std::string;
using std::vector;

// 默认入参
// int sum(int num1 = 1, int num2 = 2)
// {
//   return num1 + num2;
// }

// int main()
// {
//   const int ret1 = sum(3, 4);
//   const int ret2 = sum();

//   std::cout << "ret1: " << ret1 << std::endl;
//   std::cout << "ret2: " << ret2 << std::endl;
// }

// 内联函数
// inline int sum(int num1, int num2)
// {
//   return num1 + num2;
// }

// // 常量表达式
// constexpr int getSum(int num1, int num2)
// {
//   return num1 + num2;
// }

// int main()
// {
//   const int ret = sum(4, 4);

//   int num = 11;
//   int *p = &num;
//   int ret2 = getSum(11, *p);
//   std::cout << "ret: " << ret << std::endl;
//   std::cout << "ret2: " << ret2 << std::endl;
// }


// 6.5.3 调试帮助
int main()
{
  // assert
  int a = 1;
  int b = 2;
  assert(a != b);

  // NDEBUG
  #ifndef NDEBUG
    std::cout << "there is no NDEBUG" << std::endl;

    // 下面几个变量是预处理器内置的变量
    std::cout << "__func__" << __func__ << std::endl;
    std::cout << "__FILE__" << __FILE__ << std::endl;
    std::cout << "__LINE__" << __LINE__ << std::endl;
    std::cout << "__TIME__" << __TIME__ << std::endl;
    std::cout << "__DATE__" << __DATE__ << std::endl;
  #endif
}