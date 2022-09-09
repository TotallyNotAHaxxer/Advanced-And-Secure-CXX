#include <iostream> 

using namespace std;

class A {
    public: 
         std::string Data = "Data2";
};

int main() {
   A AA;
   std::cout << AA.Data << std::endl;
   return 0;
}
