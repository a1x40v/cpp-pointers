#include <iostream>

int compare_asc(int a, int b)
{
  if (a > b)
    return 1;
  else
    return -1;
}

void bubble_sort(int *A, int n, int (*compare)(int, int))
{
  int i, j, temp;
  for (i = 0; i < n; i++)
    for (j = 0; j < n - 1; j++)
    {
      if (compare(A[j], A[j + 1]) > 0) // compare A[j] with A[j+1] and SWAP if needed
      {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
}

int main()
{
  int A[] = {3, 2, 1, 5, 6, 4};
  bubble_sort(A, 6, compare_asc);
  for (int i = 0; i < 6; i++)
    printf("%d ", A[i]);

  return 0;
}