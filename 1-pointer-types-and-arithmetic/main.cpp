#include <iostream>

using namespace std;

int main()
{
  int a = 1065;
  int *p;
  p = &a;
  cout << "size of integer: " << sizeof(int) << endl;
  printf("Address = %p, value = %d\n", p, *p);
  printf("Address = %p, value = %d\n", p + 1, *(p + 1));

  cout << endl;

  char *p0;
  p0 = (char *)p;
  cout << "size of char: " << sizeof(char) << endl;
  printf("Address = %p, value = %c\n", p0, *p0);
  printf("Address = %p, value = %c\n", p0 + 1, *(p0 + 1));

  cout << endl;

  // Void pointer - Generic pointer
  void *p1;
  p1 = p;
  printf("Address = %p\n", p1);
}