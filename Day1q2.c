/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order. */

#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int n, target;
    int nums[MAX_SIZE];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("Indices of the two numbers are: %d and %d\n", i, j);
                return 0;
            }
        }
    }
    printf("No two numbers add up to the target.\n");
    return 0;
}