/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

void bubbleSort(int array[], int size) 
{
  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  
  for(int i = 0; i<size; i++)
  {
      printf(1,"%d ", array[i]);
  }
  printf(1, "\n");
}
int main(int argc, char*argv[]) 
{
    int arrSize = argc - 1;
    
    int arr[arrSize];
    for (int i = 1; i < arrSize + 1; i++ )
    {
	int negSign = 1;
	char* str = argv[i];
   	if (str[0] == '-')
    	{
    		negSign = -1;
    		str++;
        }
        arr[i-1] = atoi(str) * negSign;
    }
    bubbleSort(arr, arrSize);
    exit();
}

