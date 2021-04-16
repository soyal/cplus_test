#include <iostream>
#include <string>
#include <vector>

class Screen
{
public:
  typedef std::string::size_type pos;

  Screen() = default;
  Screen(pos ht, pos wh, const char c) : height(ht), width(wh), contents(ht * wh, c) {}

  char get() const
  {
    return contents[cursor];
  }
  inline char get(pos r, pos c) const;

  Screen &set(char);
  Screen &set(pos, pos, char);

  Screen &move(pos r, pos c);

  Screen &display(std::ostream &os)
  {
    do_display(os);
    return *this;
  }
  // 可以利用const来进行重载
  const Screen &display(std::ostream &os) const
  {
    do_display(os);
    return *this;
  }

  void some_member() const;

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  mutable pos access_ctr;

  void do_display(std::ostream &os) const
  {
    os << contents;
  }
};

Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline char Screen::get(pos r, pos c) const
{
  pos row = r * width;
  return contents[row + c];
}

void Screen::some_member() const
{
  access_ctr++;
}

inline Screen &Screen::set(char c)
{
  contents[cursor] = c;
  return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch)
{
  contents[r * width + c] = ch;
  return *this;
}