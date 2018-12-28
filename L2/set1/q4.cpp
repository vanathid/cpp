#include <iostream>
#include <string>

int main () {
   char st[20];
   std::cin>>st;
   std::string str=st;
   str.append(".");
   std::cout << str << '\n';
   return 0;
}
