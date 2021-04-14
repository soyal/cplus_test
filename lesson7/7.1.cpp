// 定义抽象数据类型
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Sales_data
{
  // 构造函数(默认)
  Sales_data() = default;
  // 构造函数初始值列表
  Sales_data(string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p) {}

  Sales_data(istream &is)
  {
    read(is, *this);
  }

  string bookNo;

  unsigned units_sold = 0;

  double revenue = 0.0;

  // const修饰成员函数，如果不用const修饰，那么当实例为const的时候，用点运算符调用成员函数会报错
  string isbn() const
  {
    return bookNo; // 等价于this->bookNo
  }

  Sales_data &combine(const Sales_data &);

  double avg_price() const;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data &);

// 在类的外部定义成员函数
double Sales_data::avg_price() const
{
  if (units_sold)
  {
    return revenue / units_sold;
  }
  else
  {
    return 0;
  }
}

// 返回this对象的函数
Sales_data &Sales_data::combine(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

// 与类有关，但是不方便定义成成员函数的函数，其声明也应该与类放在一起
istream &read(istream &is, Sales_data &item)
{
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
  // 注意这里没有输出换行，是因为一般都是将对格式的调整控制权交给用户
  os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();

  return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

int main()
{
  string a = "name1";
  unsigned b = 1;
  double c = 1.2;
  const Sales_data d1 = Sales_data(a, b, c);

  cout << d1.bookNo << endl;
}