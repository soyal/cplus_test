#include <iostream>

int main() 
{
  int value1 = 0, value2 = 0;
  int count = 1;

  while(std::cin >> value2) {
    if(value2 == value1) {
      count ++;
    } else {
      std::cout << "The number: " << value1 << " occur " << count << " times" << std::endl;
      value1 = value2;
      count = 1;
    }
  }

  std::cout << "The number: " << value1 << " occur " << count << " times" << std::endl;

  return 0;
}