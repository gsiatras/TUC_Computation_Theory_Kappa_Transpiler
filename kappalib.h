// This code was written by Prof. Vasilis Samoladas
#ifndef THETALIB_H
#define THETALIB_H

#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define writeStr(x) printf("%s", (x))
#define writeInteger(x) printf("%d", (x))
#define writeScalar(x) printf("%g", (x))

void write(char const* pat, ...) {
  va_list arg;

  va_start(arg, pat);
  vfprintf(stdout, pat, arg);
  va_end(arg);

  // fprintf(stdout, "\n");
}

typedef char* StringType;

char* strdup(const char*);

#define BUFSIZE 1024
char* readStr() {
  char buffer[BUFSIZE];
  buffer[0] = '\0';
  fgets(buffer, BUFSIZE, stdin);
  /* strip newline from the end */
  int blen = strlen(buffer);
  if (blen > 0 && buffer[blen - 1] == '\n') buffer[blen - 1] = '\0';
  return strdup(buffer);
}
#undef BUFSIZE

int readInteger() { return atoi(readStr()); }
double readScalar() { return atof(readStr()); }

#endif
