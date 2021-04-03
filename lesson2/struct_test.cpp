#include <iostream>
#include <struct_test_2.h>

int main()
{
  Sales_data data1, data2;

  int price = 0;
  std::cin >> data1.bookNo >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;

  std::cout << "计算结果: " << data1.revenue << std::endl;

  return 0;
}