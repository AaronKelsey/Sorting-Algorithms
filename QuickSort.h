#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_

#include <vector>
#include <iostream>
#include <algorithm>

class QuickSort
{
public:
  template<typename T>
  void Sort(std::vector<T> &_a, int p, int q);
  template<typename T>
  int Partition(std::vector<T> &_a, int p, int q);
};

template<typename T>
void QuickSort::Sort(std::vector<T> &_a, int p, int q)
{
  int r;
  if (p < q)
  {
    r = Partition(_a, p, q);
    Sort(_a, p, r);
    Sort(_a, r + 1, q);
  }
}

template<typename T>
int QuickSort::Partition(std::vector<T> &_a, int p, int q)
{
  int x = _a[p];
  int i = p;
  int j;

  for (j = p + 1; j<q; j++)
  {
    if (_a[j] <= x)
    {
      i = i + 1;
      std::swap(_a[i], _a[j]);
    }
  }

  std::swap(_a[i], _a[p]);
  return i;
}

#endif //!QUICKSORT_H_
