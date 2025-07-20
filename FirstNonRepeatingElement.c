#include <stdio.h>
#include <stdbool.h>
/*
int firstNonRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isRepeating = false;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isRepeating = true;
                break;
            }
        }
        if (!isRepeating) {
            return arr[i];
        }
    }
    return -1;
}

*/
int firstNonRepeating(int arr[], int n) {
    int freq[1000] = {0}; // Assumes input values are < 1000

    // First loop: Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Second loop: Find first non-repeating
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int arr[5],i;
    
    //get input in runtime
    for(i=0 ; i<5 ; i++)
    	scanf("%d",&arr[i]);
    	
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("n= %d\n", n);
    int result = firstNonRepeating(arr, n);
    if (result == -1) {
        printf("All elements are repeating.\n");
    } else {
        printf("First non-repeating element: %d\n", result);
    }
    return 0;
}

