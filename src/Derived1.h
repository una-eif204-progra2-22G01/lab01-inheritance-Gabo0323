#pragma once

#include "Base.h"

struct Derived1 final: Base {
public:
    void do_something() override;
};