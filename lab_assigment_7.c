//MATHEUS LIMA 
//LAB ASSIGMENT 7
//BUBBLE/SELECTION SORT 

#include <stdio.h>
#define MAX 100


void swap(int *x , int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubbleSort(int *array, int n)
{
  int i,j;
  int freq[MAX] = {0};
  int count_swaps = 0;
  for ( i = 0; i < n-1; i++)
    {
      for (j = 0; j < n-i-1 ; j++)
        {
          if (array[j] > array[j+1])
          {
            swap(&array[j], &array[j+1]);
            freq[array[j+1]]++; //FREQ
            freq[array[j]]++; //FREQ
            count_swaps++;
          }

        }//close for j

    }//close for i

  for (int k = 0; k < n ; k++)
    {
       printf("%d was swapped %d times\n",array[k],freq[ array[k] ]);//PRINT
    }
   printf("total of swaps: %d\n",count_swaps);

}//close func

void selectionSort(int arr[], int n)
{
  int i, j, min_idx, temp;
  int freq[MAX] = {0};
  int count_swaps = 0;

// One by one move boundary of unsorted subarray  
  for (i = 0; i < n-1; i++)
  {
   // Find the minimum element in unsorted array  
   min_idx = i;
   for (j = i+1; j < n; j++)
     if (arr[j] < arr[min_idx])
       min_idx = j;

     // Swap the found minimum element with the first element  
    if (min_idx != i)
    {
    temp = arr[i];
     arr[i] = arr[min_idx];
     arr[min_idx] = temp;
    
     freq[arr[i]]++; //FREQ
     freq[arr[min_idx]]++;//FREQ
     count_swaps++;
     }//close of if

     }//close of for

    for (int k = 0; k < n ; k++)
      {
        printf("%d was swapped %d times\n",arr[k],freq[ arr[k] ]);//PRINT
      }
   printf("total of swaps: %d\n",count_swaps);
  
  }



  // Driver program to test above functions
int main()
  {
    int n  = 9;
    // int n1 = 9;
    // int n2 = 9;
    int arr1[] = {97,16,45,63,13,22,7,58,72};
    int arr2[] = {90,80,70,60,50,40,30,20,10};




    printf("array1 bubble sort:\n");
    bubbleSort(arr1, n);


    printf("\narray2 bubble sort:\n");
    bubbleSort(arr2, n);

    
    int arr11[] = {97,16,45,63,13,22,7,58,72};
    int arr22[] = {90,80,70,60,50,40,30,20,10};

    printf("\narray1 selection sort:\n");
    selectionSort(arr11,  n);


    printf("\narray2 selection sort:\n");
    selectionSort(arr22, n);


    return 0;
    }

