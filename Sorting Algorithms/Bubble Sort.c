#include <stdio.h>

void main()
{
    int no_of_elements;
    
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &no_of_elements);
    
    int arr[no_of_elements];
    
    printf("Enter the array elements: ");

    for(int i=0;i<no_of_elements;i++) scanf("%d", &arr[i]);
    
    for(int i=1;i<no_of_elements;i++){
        for(int j=0;j<no_of_elements-i;j++){
            
            if(arr[j] > arr[j+1]){
               int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
    }
    
    printf("\nDisplaying the elements of sorted array:\n");
    for(int i=0;i<no_of_elements;i++) printf("%d ", arr[i]);
    
}

// Bubble Sort

// Worst and Average Case Time Complexity: O(n*n). 
// Best Case Time Complexity: O(n).