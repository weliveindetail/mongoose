#include "unit_test.h"
#include <stdlib.h>

__attribute__((noreturn))
void handle_assertion_failure() {
  exit(1);
}

int main() {
  return unit_test_main();
}
