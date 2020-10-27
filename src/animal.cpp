#include <iostream>

#include "animal.h"

void Animal::voice()
{
  std::cout << "ANIMAL voice should not have been called!" << std::endl;
}

void Animal::workaround() 
{
  Animal::voice();
  voice();
}