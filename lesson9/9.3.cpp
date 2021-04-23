/**
 * 9.3顺序容器操作
 **/
#include <iostream>
#include <deque>
#include <string>
#include <list>
#include <vector>

using std::deque;
using std::list;
using std::string;
using std::vector;

int main()
{
  // 练习9.18
  // list<string> dq;
  // string input;
  // while (std::cin >> input)
  // {
  //   dq.push_back(input);
  // }

  // std::cout << "print input:";

  // for (auto bg = dq.begin(); bg != dq.end(); bg++)
  // {
  //   std::cout << *bg;
  // }

  // 练习9.20
  // list<int> li{1,2,3,4,5,6};
  // deque<int> dq1,dq2;

  // for(auto &num: li) {
  //   if(num % 2 == 0) {
  //     dq1.push_back(num);
  //   } else {
  //     dq2.push_back(num);
  //   }
  // }

  // vector<int> vc{0,1,2,3};

  // // front和back返回的都是引用
  // std::cout << vc.front() << std::endl;
  // std::cout << vc.back() << std::endl;
  // std::cout << vc[1] << std::endl;
  // std::cout << vc.at(1) << std::endl;

  // vector<int> vc{0, 1, 2, 3, 4};
  // auto bg = vc.begin();
  // auto ed = bg + 2;
  // auto deleted = vc.erase(bg, ed);

  // for (auto &num : vc)
  // {
  //   std::cout << num << std::endl;
  // }
  // std::cout << *ed << std::endl; // 4
  // std::cout << *deleted << std::endl; // 2

  // 练习9.26
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

  vector<int> vec(ia, std::end(ia));
  list<int> lst(ia, std::end(ia));

  for (auto bg = vec.begin(); bg != vec.end();)
  {
    if (*bg % 2 == 0)
    {
      bg = vec.erase(bg);
    }
    else
    {
      bg++;
    }
  }

  std::cout << "vec: ";
  for (auto &num : vec)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  for (auto bg = lst.begin(); bg != lst.end();)
  {
    if (*bg % 2 != 0)
    {
      bg = lst.erase(bg);
    }
    else
    {
      bg++;
    }
  }

  std::cout << "lst: ";
  for (auto &num : lst)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}