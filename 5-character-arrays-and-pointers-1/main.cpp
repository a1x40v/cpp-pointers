#include <iostream>
#include <cstring>

int main()
{
  char C[20];
  C[0] = 'J';
  C[1] = 'H';
  C[2] = 'O';
  C[3] = 'N';
  C[4] = '\0';
  printf("%s\n", C);

  int len = strlen(C);
  printf("Length = %d\n", len);

  /* Using string literal */

  char C0[] = "JOHN";
  printf("Size in bytes = %lu\n", sizeof(C0)); // 5
  int len0 = strlen(C0);
  printf("Length = %d\n", len0); // 4

  /* Comma-separated list */
  char C1[5] = {'J', 'H', 'O', 'N', '\0'};

  return 0;
}