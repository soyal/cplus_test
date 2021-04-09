#include <iostream>

void exchange(int *pnum1, int *pnum2) {
  int temp = *pnum1;
  *pnum1 = *pnum2;
  *pnum2 = temp;
}

int main()
{
  int num1 = 3;
  int num2 = 5;

  exchange(&num1, &num2);

  std::cout << "num1: " << num1 << std::endl;
  std::cout << "num2: " << num2 << std::endl;
}