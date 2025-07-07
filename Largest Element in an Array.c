#include <stdio.h>

int main() {
    int n, i;
    
    // Asking for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];  // Declaring an array of size 'n'
    
    // Taking input for the array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initializing the largest element as the first element
    int largest = arr[0];
    
    // Loop through the array to find the largest element
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Output the largest element
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}
