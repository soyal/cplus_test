#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data
{
  std::string bookNo;
  int units_sold = 0;
  int revenue = 0;
};
#endif