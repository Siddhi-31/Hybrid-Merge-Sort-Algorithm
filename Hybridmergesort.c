#include <stdio.h>

#define THRESHOLD 10

void insertionSort(int arr[], int left, int right) {
    for(int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];

    while(i <= mid && j <= right) {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

void hybridMergeSort(int arr[], int left, int right) {
    if(right - left + 1 <= THRESHOLD) {
        insertionSort(arr, left, right);
        return;
    }

    if(left < right) {
        int mid = (left + right) / 2;

        hybridMergeSort(arr, left, mid);
        hybridMergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {8, 3, 1, 7, 0, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    hybridMergeSort(arr, 0, n - 1);

    printf("Sorted Output:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
