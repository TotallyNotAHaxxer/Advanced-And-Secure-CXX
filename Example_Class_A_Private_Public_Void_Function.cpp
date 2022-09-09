#include <iostream>

using namespace std;

class A {
    private:
      std::string Data = "somedata";
    public:
      void Call_Out() {
          std::cout << Data << std::endl;
      }
};

int main() {
   A ClassA;
   ClassA.Call_Out();
   return 0;
}
