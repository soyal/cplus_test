#include <iostream>

extern int global_int;

// int main() {
//   int a = 0;
//   int b = 1;
//   int *p = &a;
//   int *&ref = p;

//   ref = &b;

//   std::cout << *p << std::endl;
// }
// typedef int d1, *d1pointer;
// using cusInt = const int*;



int main()
{
  int a = 1;
  int *p = &a;

  decltype(*p + 1) c = a;
  decltype((a)) d;

  c = 2;

  std::cout << a << std::endl;
}