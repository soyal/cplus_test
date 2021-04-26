#include <iostream>
#include <stack>

using std::stack;

int main()
{
  stack<int> stk;

  stk.push(1);
  stk.pop();
  stk.push(2);

  std::cout << stk.top() << std::endl;
}