#include <iostream>
#include <string>

using std::string;

// int main()
// {
//   string s1;
//   string s2 = s1;
//   s1 = '123';
//   string s3(10, 'c');

//   std::cout << s3 << std::endl;

//   return 0;
// }

// int main()
// {
//   string a = "aaa";

//   string b = a + "bbb";

//   string c = "fff" + "nnn" + a;
// }

// 3.2.3 处理字符串中的字符
// 输出字符串中的字符数量
int main()
{
  string demo("Hello world!!!!~~~~");
  decltype(demo.size()) puncCount = 0;
  for(auto &c : demo) {
    c = toupper(c);
  }
  
  std::cout << "the upper string: " << demo << std::endl;
}