#include <string>

using std::string;

class Link_screen
{
  Link_screen &next;
};

class Y
{
  X member;

public:
  void changeXMember();
};

class X
{
  Y memeber;
  string name;
  // 让Y中的类函数能够访问X的成员
  // friend class Y;
  // 也可以只让Y的某个成员函数成为友元
public:
  friend void Y::changeXMember();
};

void Y::changeXMember()
{
  // 如果不在X中声明firend class Y，则不可访问
  member.name = "some other";
}



struct X {
  friend void f() {};
  X() { f(); }
  void f() {};
};