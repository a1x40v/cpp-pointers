#include <iostream>

int sum_of_elements(int A[], int size) // "int* A" or "int A[]" ..it's the same..
{
  int sum = 0;
  std::printf("SOE - Size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));
  for (int i = 0; i < size; i++)
    sum += A[i]; // A[i] is *(A+i)
  return sum;
}

void double_elements(int *A, int size)
{
  for (int i = 0; i < size; i++)
    A[i] = 2 * A[i];
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  int size = sizeof(A) / sizeof(A[0]);

  double_elements(A, size);

  for (int i = 0; i < size; i++)
    std::printf("%d ", A[i]);

  std::cout << std::endl;

  return 0;
}