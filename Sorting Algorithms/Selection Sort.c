#include <stdio.h>

void main()
{
    int no_of_elements;
    
    printf("Enter the number of elements to be inserted: ");
    scanf("%d",&no_of_elements);
    
    int arr[no_of_elements];
    
    printf("Enter the elements: ");
    for(int i=0;i<no_of_elements;i++) scanf("%d", &arr[i]);
    
    for(int i=0;i<no_of_elements-1;i++){
        
        int min_index = i;
        for(int j=i+1;j<no_of_elements;j++){
            
            if( arr[j] < arr[min_index]) min_index = j;
            // if( arr[j] > arr[min_index]) min_index = j; 
            // if to be sorted in descending order.
            
        }
        
        if(min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
        
    }
    
    printf("\nDisplaying the elements of the Sorted Array: \n");
    for(int i=0;i<no_of_elements;i++) printf("%d ",arr[i]);
    
}

// Selection Sort 

// Best, Worst and Average Case Time Complexity: O(n*n)