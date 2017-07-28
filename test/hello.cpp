#include "gtest/gtest.h"
#include "column/column.hpp"

#include <iostream>

namespace column_store {
  TEST(hello, bar) {
    auto a = Column{};
    a.hello();
  }
}//namespace column_store
