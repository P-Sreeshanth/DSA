#include <stdio.h>

void selnon(int n, int a[]) {
    int i, t, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

void selerec(int n, int i, int a[]) {
    int j, t;
    if (i == n)
        return;
    for (j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    selerec(n, i + 1, a); // Pass the array 'a' to the recursive call.
}

int main() {
    int a[100], i, n, j, t, ch;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1. selnon 2. selrec: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            selnon(n, a);
            break;
        case 2:
            selerec(n, 0, a); // Start the recursion with i = 0.
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Sorted array: ");
    for (j = 0; j < n; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");

    return 0;
}

