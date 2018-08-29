#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_

class InsertionSort
{
public:
  template<typename T>
  void Sort(std::vector<T> &_a);
};

template<typename T>
void InsertionSort::Sort(std::vector<T> &_a)
{
  for (int i = 1; i < _a.size(); i++)
  {
    int j = i;
    while (j > 0 && _a[j - 1] > _a[j])
    {
      {
        int temp = _a[j];
        _a[j] = _a[j - 1];
        _a[j - 1] = temp;
        j--;
      }
    }
  }
}

#endif //!_INSERTIONSORT_H_