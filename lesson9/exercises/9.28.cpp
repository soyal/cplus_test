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

void func(forward_list<string> &flist, string str1, string str2) {
  auto curr = flist.begin();
  auto prev = flist.before_begin();

  while(curr != flist.end()) {
    if(*curr == str1) {
      flist.insert_after(curr, str2);
      return;
    } else {
      prev = curr;
      curr++;
    }
  }

  flist.insert_after(prev,str2);
}

int main()
{
  forward_list<string> list{"abc", "zzz", "xxx"};

  func(list, "abcd", "cba");

  for(auto &str: list) {
    std::cout << str << std::endl;
  }
}