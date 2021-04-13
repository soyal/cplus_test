#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using std::string;
using std::vector;

// 函数匹配
// 下面的函数会触发二义性
// int sum(int num1, int num2)
// {
//   return num1 + num2;
// }

// double sum(double num1, double num2)
// {
//   return num1 + num2;
// }

// int main()
// {
//   sum(1, 1.2);
// }

int sum(int * const, int * const);
int sum(int *, int *);

int main()
{
  int a = 1;
  int b = 2;
  sum(&a , &b);
}