/**
 * 文件的输入输出
 **/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  // 这里有个问题：怎么处理文件路径，类似__dirname
  string fileName("./assets/test.txt");
  ifstream in;
  ofstream out;

  in.open(fileName);
  // 默认是trunc模式，即会覆盖原来的内容
  // out.open("./temp.txt");
  // app模式即追加模式
  out.open("./8.2.temp.txt", ofstream::app);

  if (in)
  {
    string temp;
    while (getline(in, temp))
    {
      out << temp << endl;
    }
  }
  else
  {
    cout << in.failbit << endl;
  }
}