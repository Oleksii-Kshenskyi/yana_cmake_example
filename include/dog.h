#pragma once

#include <iostream>

#include "animal.h"

class Dog: public Animal
{
  protected:
    virtual void voice() override;
};