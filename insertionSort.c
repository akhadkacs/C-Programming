#include <math.h> 
#include <stdio.h> 
  
void insertionSort(int arr[], int n) 
{ 
    int i,j;
    int key; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 

        while(j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 

// main function
int main() {
int n;
printf("%s","Please enter number of elements in array: ");
scanf("%d", &n);

  int arr[n];
  int i;
  printf("%s","Please enter element of an array: ");
  for(i = 0; i < n; ++i) {
     scanf("%d", &arr[i]);
  }
  printf("%s","Given array is: ");
  for(i = 0; i < n; ++i) {
     printf("%d ", arr[i]);
  }
  printf("\n");

insertionSort(arr, n); 

printf("%s","Sorted array is: ");
  for(i = 0; i < n; ++i) {
     printf("%d ", arr[i]);
  }
  printf("\n");

}

/**     Instructions:

To Compile : gcc -o insertionSort insertionSort.c
To Run     : ./insertionSort

*/
