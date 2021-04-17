#include <iostream>

class Temp
{
public:
  int num = 1;
  void setNum(int nNum)
  {
    num = nNum;
  }

  void setWithConst(int nNum) const
  {
    std::cout << "can not modify" << std::endl;
  }

  void setWithConst(int nNum)
  {
    setNum(nNum);
    std::cout << "modify success" << std::endl;
  }
};

int main()
{
  Temp t1;
  const Temp t2;

  t1.setWithConst(1);
  t2.setWithConst(2);
}