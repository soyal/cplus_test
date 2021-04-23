#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <string>

using std::list;
using std::deque;
using std::vector;
using std::array;
using std::string;

int main()
{
  // list<deque<int>> demo;

  // vector<int> v1;
  // const vector<int> v2;
  // auto t1 = v1.begin();
  // auto t2 = v1.end();
  // auto t3 = v2.begin();
  // auto t4 = v2.end();
  
  // for(;t3 != t4;++t3) {
  //   *t3 = 1;
  // }
  // vector<int> v1 = {1,2,3};

  // vector<int> v2(v1.begin(), v1.end());

  // vector<int> v3(v1.begin(), v1.begin() + 4);

  // list<int> v4(5, -1);

  // array<int, 5> v5;

  // // 内置的数组不允许拷贝，但是array可以
  // int arr1[3] = {1,2,3};
  // // int arr2[3] = arr1; // error

  // array<int , 3> arr3 = {1,2,3};
  // array<int, 3> arr4 = arr3;

  // // 从一个list初始化vector
  // list<int> list1 = {1,2,3};
  // vector<double> vec6(list1.begin(), list1.end());

  // assign
  list<string> list2;
  const char c1 = 'a';
  vector<const char*> vec7{&c1};

  // vec7 = list2;
  // list2.assign(vec7.begin(), vec7.end());
  list2.assign(2, "123");

  // 9.2.7的练习
  vector<int> cVe1{1,2,3};
  vector<int> cVe2{1,2,4};

  if(cVe1 < cVe2) {
    std::cout << "cVe1 < cVe2" << std::endl;
  }

  std::cout << *list2.begin() << std::endl;
}