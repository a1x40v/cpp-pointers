#include <iostream>

int add(int a, int b)
{
  return a + b;
}

int main()
{
  int (*p)(int, int);
  // p = &add;
  p = add;

  int c;
  // c = (*p)(2, 3);
  c = p(2, 3);

  printf("%d\n", c);

  return 0;
}