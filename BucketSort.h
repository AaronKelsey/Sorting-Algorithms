#ifndef _BUCKETSORT_H_
#define _BUCKETSORT_H_

#include <vector>
#include <algorithm>

class BucketSort
{
public:
  template<typename T>
  void Sort(std::vector<T> &_a);
};

template<typename T>
void BucketSort::Sort(std::vector<T> &_a)
{
  int size = (int)_a.size();
  int max = _a[0];

  //get the maximum int in the unsorted list
  for (int i = 0; i < size; i++) 
  {
    if (_a[i] > max)
    {
      max = _a[i];
    }
  }

  //make an array of the size of the max int in unsorted list
  //int array[max + 1];
  std::vector<T> array(max + 1);

  //initialize all ints in the array to 0
  for (int i = 0; i < (max + 1); i++) 
  {
    array.at(i) = 0;
  }

  //increment array indice of number in unsorted list when the number
  //appears
  for (int i = 0; i < size; i++) 
  {
    array.at(_a[i])++;
  }

  //concatenate list back into unsorted variable
  _a.clear();
  for (int i = 0; i < max + 1; i++) 
  {
    for (int j = array[i]; j > 0; j--) 
    {
      _a.push_back(i);
    }
  }
}

#endif