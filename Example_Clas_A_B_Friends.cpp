#include <iostream>
using namespace std;

class A {
   private:
       std::string Data = "D1";
   friend class B;
};

class B {
   public:
      A DT;
      void Passer() {
          std::cout << DT.Data << std::endl;
      }
};

int main() {
  B BCLASS;
  BCLASS.Passer();
}
