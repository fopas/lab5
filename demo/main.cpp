
#include "Stack_1.hpp"
#include "Stack_2.hpp"

int main() {
  int x1 = 10;
  int x2 = 5;
  My_Stack<int> stack;

  std::cout << "PUSH ELEMENTS TO STACK:" << std::endl;
  stack.push(x1);
  stack.push(x2);
  stack.push(15);
  stack.print();
  std::cout << std::endl;
  return 0;
}