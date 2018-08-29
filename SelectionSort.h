#ifndef _SELECTIONSORT_H_
#define _SELECTIONSORT_H_

#include <vector>

class SelectionSort
{
public:
  template<typename T>
  void Sort(std::vector<T> &_a);
};

template<typename T>
void SelectionSort::Sort(std::vector<T> &_a)
{
  int min, temp;

  for (int i = 0; i < _a.size(); i++)
  {
    min = i;
    for (int j = i + 1; j < _a.size(); j++)
    {
      if (_a[j] < _a[min])
      {
        min = j;
      }
    }

    temp = _a[i];
    _a[i] = _a[min];
    _a[min] = temp;
  }
}

#endif //!_SELECTIONSORT_H_
