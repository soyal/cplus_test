#include <iostream>
#include <string>
#include <vector>
#include "./screen.cpp"

using std::string;

class Window_mgr
{
public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);

private:
  // 单引号表示char，双引号表示字符串...
  std::vector<Screen> screens{Screen(30, 40, ' ')};
};

void Window_mgr::clear(ScreenIndex si) {
  Screen &s = screens[si];

  s.contents = string(s.height * s.width, ' ');
}