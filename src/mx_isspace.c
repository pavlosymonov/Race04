#include "mainhead.h"

bool mx_isspace(char c) {
  if (c == '\t' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r' || c == ' ') return 1;
  else return 0;
}
