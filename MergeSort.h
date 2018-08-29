#ifndef _MERGESORT_H_
#define _MERGESORT_H_

#include <vector>
#include <queue>

class MergeSort
{
public:
  template<typename T>
  void Sort(std::vector<T> &_vec, int _low, int _high);
  template<typename T>
  void Merge(std::vector<T> &_vec, int _low, int _mid, int _high);
};

template<typename T>
void MergeSort::Sort(std::vector<T> &_vec, int _low, int _high)
{
  if (_low < _high)
  {
    int mid = (_low + _high) / 2;
    Sort(_vec, _low, mid);
    Sort(_vec, mid + 1, _high);
    Merge(_vec, _low, mid, _high);
  }
}

template<typename T>
void MergeSort::Merge(std::vector<T> &_vec, int _low, int _mid, int _high)
{
  int i = _low;
  std::queue<T> left;
  std::queue<T> right;

  for (int i = _low; i <= _mid; i++)
  {
    left.push(_vec[i]);
  }
  for (int i = _mid + 1; i <= _high; i++)
  {
    right.push(_vec[i]);
  }

  while (!left.empty() && !right.empty())
  {
    if (left.front() < right.front())
    {
      _vec[i] = left.front();
      left.pop();
    }
    else
    {
      _vec[i] = right.front();
      right.pop();
    }
    i++;
  }

  while (!left.empty())
  {
    _vec[i] = left.front();
    left.pop();
    i++;
  }

  while (!right.empty())
  {
    _vec[i] = right.front();
    right.pop();
    i++;
  }
}


#endif //!_MERGESORT_H_
