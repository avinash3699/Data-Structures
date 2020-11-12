// Linear Search 

// Worst and Average Case Time Complexity: O(n).
// Best Case Time Complexity: O(1).

#include <stdio.h>

int linear_search(int arr[], int no_of_elements, int element_to_be_searched){
    
    for(int i = 0; i < no_of_elements; i++){
        
        if(arr[i] == element_to_be_searched){
            return i;
            break;
        }
        
    } 
    
    return -1;
    
}

void main()
{
    int no_of_elements, element_to_be_searched, pos;
    
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &no_of_elements);
    
    int arr[no_of_elements];
    
    printf("Enter the elements: ");
    for(int i = 0; i < no_of_elements; i++) scanf("%d", &arr[i]);
    
    printf("Enter the element to be searched in the array: ");
    scanf("%d", &element_to_be_searched);
    
    pos = linear_search(arr, no_of_elements, element_to_be_searched);
    
    if(pos == -1)
        printf("The Element %d is not present in the array", element_to_be_searched);
        
    else
        printf("The Element %d is present at index %d", element_to_be_searched, pos);
}