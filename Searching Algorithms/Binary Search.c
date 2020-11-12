// Binary Search 

// Worst and Average Case Time Complexity: O(log n).
// Best Case Time Complexity: O(1).

#include <stdio.h>

int binary_search(int arr[], int search_element, int first, int last){
    
    if (last < first) 
        return -1;
    
    int mid = (first + last) / 2;
    
    if(arr[mid] == search_element)
        return mid;
        
    else if(arr[mid] > search_element)
        return binary_search(arr, search_element, 0, mid-1);
    
    else
        return binary_search(arr, search_element, mid+1, last);
        
}

void main()
{
    
    int no_of_elements, element_to_be_searched, pos;
    
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &no_of_elements);
    
    int arr[no_of_elements];
    
    printf("Enter the elements in the sorted order: ");
    for(int i = 0; i < no_of_elements; i++) scanf("%d", &arr[i]);
    
    printf("Enter the number to be searched: ");
    scanf("%d", &element_to_be_searched);
    
    pos = binary_search(arr, element_to_be_searched, 0, no_of_elements-1);
    
    if(pos == -1)
        printf("The Element %d is not present in the array", element_to_be_searched);
        
    else
        printf("The Element %d is present at index %d", element_to_be_searched, pos);
        
}