#include<stdio.h>

int main()
{
  int a = 545;
  float b = 3.31;
  char c = 'L';
  double d = 8;
  unsigned int e = 0;
  short int f = 5;
  // print value and size of an int variable
  printf("int a value: %d size: %lu bytes\n", a, sizeof(a));
  printf("float b value: %f size: %lu bytes\n", b, sizeof(b));
  printf("char c value: %c size: %lu bytes\n", c, sizeof(c));
  printf("double d value: %lf size: %lu bytes\n", d, sizeof(d));
  printf("unsigned int e: %u size: %lu bytes\n", e, sizeof(e));
  printf("short int f: %hd size: %lu bytes\n", f, sizeof(f)); 
}

