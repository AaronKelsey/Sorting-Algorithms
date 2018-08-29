#include <iostream>
#include <algorithm>
#include "QuickSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "HeapSort.h"
#include "BucketSort.h"

void Print(std::vector<int> _a);

int main(void)
{
  // Initialise vector with 20 integers
  std::vector<int> vec(20);
  std::generate(vec.begin(), vec.end(), std::rand);

  // Output vector to console
  Print(vec);

  // QUICKSORT
  QuickSort quickSort;
  //quickSort.Sort(vec, 0, vec.size());
  Print(vec);

  // MERGESORT
  MergeSort mergeSort;
  //mergeSort.Sort(vec, 0, static_cast<int>(vec.size()) - 1);
  Print(vec);

  // BUBBLESORT
  BubbleSort bubbleSort;
  //bubbleSort.Sort(vec);
  Print(vec);

  // SELECTIONSORT
  SelectionSort selectionSort;
  //selectionSort.Sort(vec);
  Print(vec);

  // INSERTIONSORT
  InsertionSort insertionSort;
  //insertionSort.Sort(vec);
  Print(vec);

  // HEAPSORT
  HeapSort heapSort;
  //heapSort.BuildMaxHeap(vec, vec.size() - 1);
  //heapSort.Sort(vec);
  Print(vec);

  // BUCKETSORT
  BucketSort bucketSort;
  //bucketSort.Sort(vec);
  Print(vec);

  std::cin.get();
  return 0;
}

void Print(std::vector<int> _a)
{
  for (int i = 0; i < _a.size(); i++)
  {
    std::cout << _a[i] << ", ";
  }
  std::cout << "\n";
}