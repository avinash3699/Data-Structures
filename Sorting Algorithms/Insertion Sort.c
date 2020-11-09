#include <stdio.h>

void main()
{
    int no_of_elements;
    
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &no_of_elements);
    
    int arr[no_of_elements];
    
    printf("Enter the elements: ");
    for(int i=0;i<no_of_elements;i++) scanf("%d", &arr[i]);
    
    for(int i=1;i<no_of_elements;i++){
        
        int temp = arr[i], j;
        
        for(j=i; j>0 && temp<arr[j-1]; j--){
            arr[j] = arr[j-1];
        }
        
        arr[j] = temp;
        
    }
    
    printf("\nDisplaying the elements of the sorted array: \n");
    for(int i=0;i<no_of_elements;i++) printf("%d ", arr[i]);
    
}

// Insertion Sort 

// Worst and Average Case Time Complexity: O(n*n).
// Best Case Time Complexity: O(n).