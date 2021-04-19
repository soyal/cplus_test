/**
 * string的输入输出
 **/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::istringstream;

struct PersonInfo {
  string name;
  vector<string> phones;
};

// int main()
// {
//   string line;
//   vector<PersonInfo> persons;

//   while(getline(std::cin, line)) {
//     PersonInfo psInfo;
//     istringstream record(line);
//     string phone;

//     record >> psInfo.name;

//     while(record >> phone) {
//       psInfo.phones.push_back(phone);
//     }
//   }
// }

// or

int main()
{
  string line;
  vector<PersonInfo> persons;
  istringstream record;

  while(getline(std::cin, line)) {
    PersonInfo psInfo;
    record.clear();
    record.str(line);

    record >> psInfo.name;

    string phone;
    while(record >> phone) {
      psInfo.phones.push_back(phone);
    }

    persons.push_back(psInfo);
  }

  for(auto &psInfo:persons) {
    std::cout << "name: " << std::endl;
    std::cout << psInfo.name << std::endl;

    std::cout << "phones: " << std::endl;

    for(auto &phoneNum:psInfo.phones) {
      std::cout << phoneNum << std::endl;
    }
  }
}