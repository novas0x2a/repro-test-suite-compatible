#include <iostream>

int main() {
  std::cerr << "manual_test.cc was executed\n";
  std::cerr
      << "This should be unreachable if test_suite.target_compatible_with is respected.\n";
  return 1;
}
