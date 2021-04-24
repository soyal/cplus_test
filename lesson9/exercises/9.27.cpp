#include <iostream>
#include <deque>
#include <string>
#include <list>
#include <vector>
#include <forward_list>

using std::deque;
using std::list;
using std::string;
using std::vector;
using std::forward_list;

int main()
{
  forward_list<int> list{0,1,2,3,4,5,6,7};

  auto beforeBg = list.before_begin();
  auto bg = list.begin();

  while(bg != list.end()) {
    if(*bg % 2 != 0) {
      bg = list.erase_after(beforeBg);
    } else {
      beforeBg = bg;
      bg++;
    }
  }

  for(auto &num: list) {
    std::cout << num << std::endl;
  }
}