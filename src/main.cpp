#include <iostream>
#include "dog.h"
#include "cat.h"

int main()
{
  Animal* animal = new Dog();
  animal->workaround();

  return 0;
}