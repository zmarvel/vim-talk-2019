
#include "cat.hpp"
#include "dog.hpp"

int main(int argc, char* argv[]) {
  Cat cat{};
  Dog dog{};

  cat.meow();
  dog.bark();
  cat.eat();
  dog.eat();

  return 0;
}
