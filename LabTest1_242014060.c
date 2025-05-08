//Name:Md.Shahriar rahman
//ID:242014060
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n1, n2, x;
    int labA[100], labB[100], merged[200];

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &labA[i]);
        merged[i] = labA[i];
    }

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &labB[i]);
        merged[n1 + i] = labB[i];
    }

    scanf("%d", &x);

    int total = n1 + n2;

    insertionSort(merged, total);

    for (int i = 0; i < total; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    int found = binarySearch(merged, total, x);
    if (found != -1) {
        printf("Score %d is present in the list.\n", x);
    } else {
        printf("Score %d is not present in the list.\n", x);
    }

    return 0;
}
