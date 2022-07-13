#include <iostream>

int *add(int *a, int *b)
{
  // int c = *a + *b;
  // return &c; // return address of local var
  int *p = new int;
  *p = *a + *b;

  return p;
}

int main()
{
  int a = 2, b = 4;
  int *ptr = add(&a, &b);

  printf("sum = %d\n", *ptr);

  return 0;
}
