#include <stdio.h>

int binary_search(int arr[], int left, int right, int target){
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binary_search(arr, left, mid - 1, target);
    } else {
        return binary_search(arr, mid + 1, right,target);
    }
}

int main() {
    int n, target;
    int arr[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int result = binary_search(arr, 0, n - 1, target);
    printf("%d\n", result);
    return 0;
}