// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int search(int arr[], int N, int x) {
 int i;
 //printf("ARR size: %d\n",N);
 for (i = 0; i < N; i++)
 {

     if (arr[i] == x)
   return i;}
 return -1;
}

int main(int argc, char* argv [])
{
    const int arrSize=argc-2;
    int arr[arrSize];
    for (int i = 2; i <argc; i++) arr[i-2] = atoi(argv[i]);
    

 // Function call
 int result = search(arr, arrSize, atoi(argv[1]));
 (result == -1)
  ? printf(1,"Element is not present in array")
  : printf(1,"Element is present at index %d", result);
 exit();
}

