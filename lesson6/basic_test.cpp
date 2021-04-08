#include <iostream>

// int fact(int val)
// {
//   int result = 1;
//   while (val > 1)
//   {
//     result *= (val--);
//   }

//   return result;
// }

// 函数返回不能是数组或者函数，但可以是指向这两者的指针
// 下面代码会报错
// int[] main()
// {
//   int j = fact(5);
//   int arr[]{1,2,3};

//   std::cout << "5! is " << j << std::endl;

//   return arr;
// }

/** 局部静态变量 */
int count_calls()
{
  static int ctr = 0;
  return ctr++;
}

int main() {
  int res;

  for(int i=0;i<10;i++) {
    res = count_calls();
  }

  std::cout << res << std::endl;
}
