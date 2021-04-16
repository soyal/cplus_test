#include <iostream>
#include <string>
#include <vector>
#include "./screen.cpp"

using std::string;

class Window_mgr
{

private:
  // 单引号表示char，双引号表示字符串...
  std::vector<Screen> screens{Screen(30, 40, ' ')};
};

string func(string& s) {
  return s;
}

int main()
{
  string a = "aaabbb";
  func(a) = "llll";

  std::cout << "aa: " << a << std::endl;
}