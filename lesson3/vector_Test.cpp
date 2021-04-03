#include <vector>
#include <iostream>
#include <string>

using std::string;
using std::vector;

// int main() {
//   vector<int> nums;

//   for(int i=0;i<100;i++) {
//     nums.push_back(i);
//   }

//   std::cout << nums.size() << std::endl;
// }

// int main() {
//   vector<int> v{1,2,3,4,5,6,7,8};
//   for(int &i:v) {
//     i *= i;
//   }

//   for(int num:v) {
//     std::cout << num << ' ';
//   }

//   std::cout << std::endl;
// }

// int main()
// {
//   vector<int> score(11, 0);
//   unsigned grade;
//   while (std::cin >> grade)
//   {
//     if (grade <= 100)
//     {
//       score[grade / 10]++;
//     }
//   }
// }

// 练习3.17，从cin读入一组词，并将其全部改写为大写形式
int main()
{
  string str;
  vector<string> strVec;

  while (std::cin >> str)
  {
    for (auto &c : str)
    {
      c = toupper(c);
    }
    strVec.push_back(str);
  }

  for(string item:strVec) {
    std::cout << item << std::endl;
  }

  return 0;
}