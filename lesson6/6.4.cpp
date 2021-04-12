#include <iostream>
#include <string>
#include <initializer_list>
#include <vector>

using std::initializer_list;
using std::string;
using std::vector;

// 函数重载：同一个函数名，但是入参列表不同

// const_cast 可以用来移除(或添加) 引用或者指针的const限定符
const string &shorterString(const string &s1, const string &s2)
{
  return s1.size() < s2.size() ? s1 : s2;
}

string &shorterString2(string &s1, string &s2)
{
  auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));

  return const_cast<string&>(r);
}

int main()
{
  string s1 = "aaa";
  const string s2 = "bbbb";

  // const_cast<const string&>(s1) = "ad";

  // 我们也可以用显式转换运算符，但是它不会检查类型
  // 也就是下面的代码，即使我把一个string转换成int都行，编译器也不会报错
  // 因此用const_cast要更安全
  auto &ret = (string &)shorterString(s1, s2);

  // error
  ret = "cc";

  std::cout << "s1: " << s1 << std::endl;
}