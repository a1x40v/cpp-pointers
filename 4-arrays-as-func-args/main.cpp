#include <istream>

int sum_of_elements(int A[])
{
  int sum = 0;
  int size = sizeof(A) / sizeof(A[0]);
  std::printf("SOE - Size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));
  for (int i = 0; i < size; i++)
    sum += A[i];
  return sum;
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};

  int total = sum_of_elements(A);

  std::printf("Sum of elements = %d\n", total);
  std::printf("Main - Size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));

  return 0;
}