// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }

    int maxCount = 0;
    int mostFrequent;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    printf("Most frequent element = %d\n", mostFrequent);
    printf("Frequency = %d\n", maxCount);

    return 0;
}
