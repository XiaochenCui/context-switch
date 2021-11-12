#include <stdio.h>

void inner_function(int a) {
  a = 100;
  printf("value of a (inside the inner function): %d\n", a);
}

int main() {
  int a = 1;
  printf("value of a (original): %d\n", a);
  inner_function(a);
  printf("value of a (after inner function was called): %d\n", a);
}
