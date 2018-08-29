#ifndef _BUBBLESORT_H_
#define _BUBBLESORT_H_

#include <vector>

class BubbleSort
{
public:
  template<typename T>
  void Sort(std::vector<T> &_a);
};

template<typename T>
void BubbleSort::Sort(std::vector<T> &_a)
{
  int temp;
  int n = _a.size();

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (_a[j] > _a[j + 1])
      {
        temp = _a[j];
        _a[j] = _a[j + 1];
        _a[j + 1] = temp;
      }
    }
  }
}

#endif //!_BUBBLESORT_H_