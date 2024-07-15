#include <stdio.h>
#include <stdlib.h>

int is_present(int *arr, int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            return 1;
        }
    }
    return 0;
}

void find_unique(int *arr1, int size1, int *arr2, int size2, int **result, int *result_size) {
    *result = (int *)malloc(size1 * sizeof(int));
    *result_size = 0;
    for (int i = 0; i < size1; i++) {
        if (!is_present(arr2, size2, arr1[i])) {
            (*result)[(*result_size)++] = arr1[i];
        }
    }
}

int main(void) {
    int nums1[] = {1, 2, 3};
    int nums2[] = {2, 4, 6};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    int *unique1, *unique2;
    int unique1_size, unique2_size;

    find_unique(nums1, size1, nums2, size2, &unique1, &unique1_size);
    find_unique(nums2, size2, nums1, size1, &unique2, &unique2_size);

    printf("Output: [[");
    for (int i = 0; i < unique1_size; i++) {
        printf("%d", unique1[i]);
        if (i < unique1_size - 1) {
            printf(", ");
        }
    }
    printf("],[");
    for (int i = 0; i < unique2_size; i++) {
        printf("%d", unique2[i]);
        if (i < unique2_size - 1) {
            printf(", ");
        }
    }
    printf("]]\n");

    free(unique1);
    free(unique2);

    return (0);
}
