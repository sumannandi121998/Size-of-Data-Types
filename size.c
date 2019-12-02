#include <stdio.h>
int main()
{
  int i;
  float f;
  char c;
  double d;
  long int l;
  printf("Size of int: %ld bytes\n",sizeof(i));
  printf("Size of float: %ld bytes\n",sizeof(f));
  printf("Size of char: %ld bytes\n",sizeof(c));
  printf("Size of double: %ld bytes\n",sizeof(d));
  printf("Size of long int: %ld bytes\n",sizeof(l));
}
