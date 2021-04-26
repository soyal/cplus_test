#include <iostream>

int main()
{
  int a[]{1, 2, 3, 4};

  std::cout << sizeof(a) / sizeof(*a) << std::endl;
}