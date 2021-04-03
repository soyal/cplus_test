#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::begin;
using std::end;

// int main()
// {
//   int arr[10];
//   int *ptrs[10]; // 含有10个整型指针的数据
//   int (*parr)[10] = &arr; // parr是一个指向arr的指针
//   int (&arrRef)[10] = arr; // arrRef是arr的引用

//   return 0;
// }

// 初始化数组，每个item的值同索引值
// int main()
// {
//   int arr[10];
//   vector<int> v(10);
//   auto arrSize = sizeof(arr);

//   for (int i = 0; i < (arr.end() - arr.begin()); i++)
//   {
//     arr[i] = i;
//   }

//   for (auto num : arr)
//   {
//     std::cout << num << std::endl;
//   }
// }

// int main()
// {
//   int arr[] = {10,4,9};
//   int *p = arr; // 在数组中，这种形式等于 *p = &arr[0]

//   std::cout << *p << std::endl;

//   return 0;
// }

// int main()
// {
//   int ia[] = {1,2,3,4};
//   int *end = &ia[4];

//   for(auto ia2 = ia;ia2 != end;ia2++) {
//     std::cout << *ia2 << std::endl;
//   }
// }

int main()
{
  int ia[] = {0,1,2,3};
  int *f = begin(ia);
  int *last = end(ia);

  for(;f != last;f++) {
    std::cout << *f << std::endl;
  }
}