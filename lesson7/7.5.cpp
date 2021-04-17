// 再谈构造函数
#include <iostream>
#include <string>
#include <vector>

using std::string;

class ConstRef
{
public:
  ConstRef(int il, int il2) : ci(il), ri(il2) {}

private:
  int i;
  const int ci;
  int &ri;
};

// 委托构造函数
class ProxyConstruct
{
  std::string name;
  unsigned int age;
  double price;

public:
  ProxyConstruct(std::string _name, unsigned int _age, double _price) : name(_name), age(_age), price(_price)
  {
    std::cout << "pc1" << std::endl;
  }
  // 委托了上面的构造函数
  ProxyConstruct(std::string pcName) : ProxyConstruct(pcName, 1, 1.2)
  {
    std::cout << "pc2" << std::endl;
  }
  // 委托了上面的构造函数
  ProxyConstruct() : ProxyConstruct("default name")
  {
    std::cout << "pc3 no default input " << std::endl;
  }
};

// 类类型的隐式转换(只会出现在构造函数只要一个入参的前提下)
class ImplicityTs
{
  string name;

public:
  // 可以通过explicit关键字阻止隐式转换
  explicit ImplicityTs(string _name) : name(_name) {}
  // ImplicityTs(string _name) : name(_name) {}
  void combine(ImplicityTs);
  void combine2(ImplicityTs);
};
// 调用
// int main()
// {
//   ImplicityTs its = ImplicityTs("n1");
//   // 因为隐式转换只能走一步转换
//   // 下面的代码走了两次, "n2" => string => ImplicityTs，所以没有通过编译
//   // its.combine("n2");

//   string str = "n2";
//   // 改成下面的形式，则可以通过编译
//   its.combine(str);

//   // 如果构造函数声明为explicit，即使拷贝复制这种形式的隐式转换也是不允许的
//   // ImplicityTs its2 = str; 错误
//   ImplicityTs its2(str); // 正确
// }

// 聚合类
struct PublicClsDemo
{
  string attr1;
  int attr2;
  double attr3;
};
// int main()
// {
//   string temp("name");
//   PublicClsDemo demo = {temp, 1, 1.2};
// }

// 字面值常量类
class Debug
{
public:
  constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}

private:
  bool hw;
  bool io;
  bool other;
};