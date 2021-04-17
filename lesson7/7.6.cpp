// 类的静态成员
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Account
{
public:
  string accountName;
  Account(string _acName = defaultAcName) : accountName(_acName) {}

  void setAccountName(string _acountName) const {
    accountName = _acountName;
  }

  static void printSattr1()
  {
    std::cout << "static sattr1: " << sattr1 << std::endl;
  }
  static void setSattr1(int sattr1Value)
  {
    sattr1 = sattr1Value;
  }


private:
  static int sattr1;
  static const vector<int> sattr2;
  // 如果要在类中初始化静态成员，则需要声明为const或者constexpr
  static string defaultAcName;
};
string Account::defaultAcName = "defaultAcName";
int Account::sattr1 = 10;

int main()
{
  Account ac1 = Account();
  std::cout << ac1.accountName << std::endl;

  // 可以直接通过类实例调用静态成员
  ac1.printSattr1();
  ac1.setSattr1(20);

  // 也可以用命名空间操作符来访问
  Account::printSattr1();
}
