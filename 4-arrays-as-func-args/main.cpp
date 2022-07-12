#include <istream>

int sum_of_elements(int A[], int size) // "int* A" or "int A[]" ..it's the same..
{
  int sum = 0;
  std::printf("SOE - Size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));
  for (int i = 0; i < size; i++)
    sum += A[i]; // A[i] is *(A+i)
  return sum;
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  int size = sizeof(A) / sizeof(A[0]);
  int total = sum_of_elements(A, size); // A can be used for &A[0]

  std::printf("Sum of elements = %d\n", total);
  std::printf("Main - Size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));

  return 0;
}