/**
 * 文件的输入输出
 **/

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
  // 这里有个问题：怎么处理文件路径，类似__dirname
  string fileName("test.txt");
  ifstream in;

  in.open(fileName);

  cout << fs.get_current() << endl;

  if(in) {
    cout << "ok1" << endl;
    string temp;
    while(getline(in, temp)) {
      cout << temp << endl;
    }
  } else {
    cout << in.failbit << endl;
  }
}