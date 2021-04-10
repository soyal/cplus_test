#include <iostream>
#include <string>

using std::string;

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
// int count_calls()
// {
//   static int ctr = 0;
//   return ctr++;
// }

// int main() {
//   int res;

//   for(int i=0;i<10;i++) {
//     res = count_calls();
//   }

//   std::cout << res << std::endl;
// }

// 6.2.1 传值参数
// void func(int &num)
// {
//   num = 3;
// }

// int main() 
// {
//   int num = 1;
//   func(num);

//   std::cout << num << std::endl;
// }

// void exchange(int &num1, int &num2) {
//   int temp = num1;
//   num1 = num2;
//   num2 = temp;
// }

// int main()
// {
//   int a = 1;
//   int b = 2;
//   exchange(a, b);
//   std::cout << a << std::endl;
//   std::cout << b << std::endl;
// }


// 数组形参
// void func(const int*); // 等于 void func(const int[])

// void exchangePointer(int *&p1, int *&p2) {
//   auto temp = p1;
//   p1 = p2;
//   p2 = temp;
// }
// int main()
// {
//     int a = 1;
//     int b = 2;
//     int *p1 = &a;
//     int *p2 = &b;

//     exchangePointer(p1, p2);
//     std::cout << *p1 << std::endl;
//     std::cout << *p2 << std::endl;
// }

int main(int argc, char* argv[])
{
  std::cout << "argc: " << argc << std::endl;

  for(int i=0;i<argc;i++) {
    std::cout << argv[i] << std::endl;
  }
}