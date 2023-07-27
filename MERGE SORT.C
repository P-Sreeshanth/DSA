
#include <stdio.h>

void merge(int a[], int mid, int low, int high) {
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (a[i] <= a[j]) // Corrected the condition to use <= for stable sorting
            b[k] = a[i], k++, i++;
        else
            b[k] = a[j], k++, j++;
    }

    while (i <= mid)
        b[k] = a[i], k++, i++;
    while (j <= high)
        b[k] = a[j], k++, j++;

    for (i = low; i <= high; i++)
        a[i] = b[i];
}

void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, mid, low, high);
    }
}

int main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements to sort: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergesort(a, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
