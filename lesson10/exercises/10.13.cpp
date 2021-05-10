#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::vector;

bool compareFunc(string &str)
{
  return str.size() > 5;
}

int main()
{
  vector<string> strs{"aaa", "bbbbbb", "cccccc", "dd", "eee"};

  std::partition(strs.begin(), strs.end(), compareFunc);

  for (string &str : strs)
  {
    std::cout << str << " ";
  }
}