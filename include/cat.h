#pragma once

#include <iostream>

#include "animal.h"

class Cat: public Animal
{
  protected:
    virtual void voice() override;
};