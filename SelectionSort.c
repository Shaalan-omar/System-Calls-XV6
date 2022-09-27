
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

void swap(int *a, int *b) 
{ 
int temp = *a; 
*a = *b; 
*b = temp; 
}   

void selectionSort(int array[], int n) 
{ 
int i, j, min_element; 
for (i = 0; i < n-1; i++) 
{
min_element = i; 
for (j = i+1; j < n; j++) 
if (array[j] < array[min_element]) 
min_element = j; 
swap(&array[min_element], &array[i]); 
} 
} 

void printArray(int array[], int size) 
{ 
int i; 
for (i=0; i < size; i++) 
printf(1,"%d ", array[i]); 
 
}   

int main(int argc, char *argv[]) 
{ 
     int arrSize=argc-1;
    int arr[arrSize];
    for (int i =1; i <arrSize + 1; i++) 
    {
    	int negSign = 1;
    	char* str = argv[i];
    	
    	if(str[0] == '-')
    	{
    		negSign = - 1;
    		str++;
    	}
    	
    	
    	arr[i-1]= atoi(str) * negSign;
    	
      }
selectionSort(arr,arrSize);
printf(1,"Sorted array:\n"); 
printArray(arr,arrSize);
exit(); 
}
