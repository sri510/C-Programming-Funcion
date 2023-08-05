/* Write a C program to find all distinct triplets in a given array of integers whose sum is equal to zero.
*/

#include <stdio.h>
#include <stdlib.h>
static int compare_two_num(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}
static void two_sum(int *nums, int low_pos, int high_pos, int target, int **results, int *ctr)
{
    while (low_pos < high_pos) {
        int diff = target - nums[low_pos];
        if (diff > nums[high_pos]) {
            while (++low_pos < high_pos && nums[low_pos] == nums[low_pos - 1]) {}
        } else if (diff < nums[high_pos]) {
            while (--high_pos > low_pos && nums[high_pos] == nums[high_pos + 1]) {}
        } else {
            results[*ctr] = malloc(3 * sizeof(int));
            results[*ctr][0] = -target;
            results[*ctr][1] = nums[low_pos];
            results[*ctr][2] = nums[high_pos];
            (*ctr)++;
            while (++low_pos < high_pos && nums[low_pos] == nums[low_pos - 1]) {}
            while (--high_pos > low_pos && nums[high_pos] == nums[high_pos + 1]) {}
        }
    }
}
static int** three_Sum(int* nums, int numsSize, int* returnSize)
{
    if (numsSize < 3) {
        return NULL;
    }
    qsort(nums, numsSize, sizeof(*nums), compare_two_num);
    *returnSize = 0;
    int i, j, capacity = 50000;
    int **results = malloc(capacity * sizeof(int *));
    for (i = 0; i < numsSize; i++) {
        if (i == 0 || i > 0 && nums[i] != nums[i - 1]) {
            two_sum(nums, i + 1, numsSize - 1, -nums[i], results, returnSize);
        }
    }
    return results;
}
int main(void)
{
    int i, ctr;
    int nums[] = {-2,0,0,1,1};
	ctr = sizeof(nums) / sizeof(*nums);
  printf("Original Array: ");
   for(i=0; i<ctr; i++)
      {
          printf("%d  ", nums[i]);
      }
    int **result = three_Sum(nums, sizeof(nums) / sizeof(*nums), &ctr);
    for (i = 0; i < ctr; i++) {
		printf("\nUnique triplets of the said array whose sum equal to zero: ");
        printf("%d %d %d\n", result[i][0], result[i][1], result[i][2]);
    }
    return 0;
}
