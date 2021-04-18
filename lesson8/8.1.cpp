/**
 * IO类 
 **/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 练习8.1
istream  &func1(istream &is) {
  string tempstr;

  while(is >> tempstr) {
    cout << tempstr << endl;
  }

  is.clear();

  return is;
}

int main()
{
  // auto old_state = cin.rdstate();
  // cin.clear();

  // cout << old_state << endl;
}
