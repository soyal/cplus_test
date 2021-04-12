#include <iostream>
#include <string>
#include <initializer_list>
#include <vector>

using std::initializer_list;
using std::string;
using std::vector;

// void func(string errorName, initializer_list<string> il)
// {
//   std::cout << "errorName: " << errorName << std::endl;
//   for (auto beg = il.begin(); beg != il.end(); beg++)
//   {
//     std::cout << *beg << std::endl;
//   }
// }

// int main()
// {
//   string a = "aaa";
//   string b = "bbb";

//   func("error1", {a, b});
//   func("error2", {a});
// }

// 返回引用
// int &func(int &a, int &b)
// {
//   return a > b ? a : b;
// }

// int main()
// {
//   int a = 3;
//   int b = 2;

//   int &result = func(a, b);

//   result = 4;

//   std::cout << "a is " << a << std::endl;
//   return 0;
// }

// 返回局部对象的引用或指针（错误做法）
// string &func()
// {
//   string ret = "aabbcc";

//   return ret;
// }

// int main()
// {
//   string ret = func();

//   std::cout << ret << std::endl;

//   return 0;
// }

// 返回多个值
// vector<int> func()
// {
//   return {1, 2, 3};
// }

// int main()
// {
//   auto ret = func();

//   std::cout << "ret: " << *(ret.begin() + 1) << std::endl;

//   return EXIT_SUCCESS;
// }

// 返回数组指针
// 1.用类型别名
typedef int (*arrP)[10];
// 2.写成下面的形式
int (*func())[10]
{
  int (*arr)[10];
  return arr;
}
// 3.尾置返回类型(trailing return type)
auto func(int) -> int (*)[10] 

