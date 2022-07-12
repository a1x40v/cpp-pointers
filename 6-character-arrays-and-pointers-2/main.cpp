#include <iostream>

void print(const char *C)
{
  while (*C != '\0')
  {
    printf("%c", *C);
    C++;
  }
  printf("\n");
}

int main()
{
  // char *C = "Hello"; // string gets stored as compile time constant
  // C[0] = 'A'; // crash

  char C[20] = "Hello"; // string gets stored in the space for array

  print(C);

  return 0;
}