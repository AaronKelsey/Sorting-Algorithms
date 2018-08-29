#ifndef _HEAPSORT_H_
#define _HEAPSORT_H_

#include <vector>

class HeapSort
{
public:
  template<typename T>
  void Sort(std::vector<T> &_a);
  template<typename T>
  void MaxHeapify(std::vector<T> &_a, int _i, int _n);
  template<typename T>
  void BuildMaxHeap(std::vector<T> &_a, int _n);
};

template<typename T>
void HeapSort::Sort(std::vector<T> &_a)
{
  int i, temp;
  for (i = _a.size() - 1; i >= 2; i--)
  {
    temp = _a[i];
    _a[i] = _a[1];
    _a[1] = temp;
    MaxHeapify(_a, 1, i - 1);
  }
}

template<typename T>
void HeapSort::MaxHeapify(std::vector<T> &_a, int _i, int _n)
{
  int j, temp;
  temp = _a[_i];
  j = (2 * _i);

  while (j <= _n)
  {
    if (j < _n && _a[j + 1] > _a[j])
    {
      j = j + 1;
    }
    if (temp > _a[j])
    {
      break;
    }
    else if (temp <= _a[j])
    {
      _a[j / 2] = _a[j];
      j = (2 * j);
    }
  }
  _a[j / 2] = temp;
  return;
}

template<typename T>
void HeapSort::BuildMaxHeap(std::vector<T> &_a, int _n)
{
  int i;
  for (i = _n / 2; i >= 1; i--)
  {
    MaxHeapify(_a, i, _n);
  }
}

#endif
