// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, num;

    printf("Number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    for(i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter number you want to insert: ");
    scanf("%d", &num);

    int pos = n;   // assume insertion at end

    for(i = 0; i < n; i++) {
        if(arr[i] > num) {
            pos = i;
            break;
        }
    }

    // Shift elements right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert number
    arr[pos] = num;

    printf("Array after insertion:\n");
    for(i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}