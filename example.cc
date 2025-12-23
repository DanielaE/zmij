#include <stdio.h>

#include "zmij.h"

int main() {
  char buf[zmij::buffer_size];
  zmij::to_string(6.62607015e-34, buf);
  puts(buf);
}
