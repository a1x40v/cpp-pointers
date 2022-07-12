#include <istream>

int sum_of_elements(int A[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
    sum += A[i];
  return sum;
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  int size = sizeof(A) / sizeof(A[0]);
  int total = sum_of_elements(A, size);

  std::printf("Sum of elements = %d\n", total);

  return 0;
}