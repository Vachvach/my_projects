#include<iostream>
const int size = 10;

void merge(int*& ptr, int first, int mid, int last)
{
   int temp[size] {0};
   int f1 = first;
   int l1 = mid;
   int f2 = mid+1;
   int l2 = last;
   int index = f1;
   for(;f1 <= l1 && f2 <= l2;++index)
   {
       if(ptr[f1] < ptr[f2])
       {
           temp[index] = ptr[f1];
           ++f1;
       }
       else
       {
           temp[index] = ptr[f2];
           ++f2;
       }
   }
   for(;f1 <= l1;++f1,++index)
   {
       temp[index] = ptr[f1];
   }
   for(; f2 <= l2; ++f2,++index)
   {
       temp[index] = ptr[f2];
   }
   for(index = first;index <= last;++index)
   {
       ptr[index] = temp[index];
   }
}

void mergeSort(int* data, int first, int last)
{
    if(first < last)
    {
        int mid = (first + last)/2;
        mergeSort(data,first,mid);
        mergeSort(data, mid+1, last);
        merge(data, first, mid, last);
    }
}
int main()
{
    int arr[size] {23,25,63,37,72,27,96,67,66,83};
    int first = 0;
    int last = size-1;
    mergeSort(arr, first, last);
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

}