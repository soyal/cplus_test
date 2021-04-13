#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

// 函数指针
// int sum(int num1, int num2)
// {
//   return num1 + num2;
// }

// int main()
// {
//   // 把函数名当做变量用的时候，会自动转换成指针
//   auto p = sum;
//   // 调用函数指针的时候，不用解引用，下面的表达式等同于(*p)(1, 2)
//   auto ret = p(1, 2);

//   std::cout << "ret: " << ret << std::endl;
// }

// 有重载的情况
int sum(int num);

// 可以定义函数类型的指针，来传递函数
int sumWrapper(int num1, int num2, int (*p)(int num))
{
  return p(num1);
}

// 上面这样写太繁琐了
// 可以用decltype
int sumWrapper2(int num, decltype(sum) p);
// 也可以用类型别名
typedef int (*Func)(int num);
typedef decltype(sum) *Func2;
int sumWrapper3(int num, Func2);


// 函数的返回类型是函数指针
using PF = decltype(sum) *;
using Func3 = decltype(sum) *;
PF sumWrapper4(int num, Func3);
// 也可以使用尾置返回类型
auto f1(int num) -> int (*)(int num1, int num2);


int main()
{
  // 直接赋值是推断不出来结果的
  // auto p = sum;

  // 需要明确写出需要精确匹配的类型
  // int (*p)(int) = sum;

  // 传递函数指针
  // sumWrapper(1,2,p);
  // sumWrapper2(1, p);

  cout << "123" << endl;
}

