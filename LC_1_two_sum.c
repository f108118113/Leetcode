#include <stdio.h>
#include <stdlib.h>

int* twoSum_add(int*, int, int, int*);
int* twoSum_minus(int*, int, int, int*);

int* twoSum_add(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int j = 0;
    int tmp = 0;
    int *memory;
    memory = malloc(sizeof(int)*2);

    for(i = 0; i < numsSize; i++){
        for(j = (i+1); j < numsSize; j++){
            tmp = nums[i] + nums[j];
            if(tmp == target){
                memory[0] = i;
                memory[1] = j;
                *returnSize = 2;
            }
        }
    }
    return memory;
}

int* twoSum_minus(int* nums, int numsSize, int target, int* returnSize){
    int i = 0;
    int j = 0;
    int tmp = 0;
    int *memory;
    memory = malloc(sizeof(int)*2);

    for( i = 0; i < numsSize; i++){
        tmp = (target - nums[i]);
        for( j = i + 1; j < numsSize; j++){
            if(nums[j] == tmp){
                memory[0] = i;
                memory[1] = j;
                *returnSize = 2;
            }
        }
    }

    return memory;
}



int main(){
    int num1[4] = {2,7,11,15};
    
    int *a = twoSum_add(num1, 4, 9, num1);
    printf("twoSum use add method: %d, %d\n", *a, *(a+1));

    int *b = twoSum_minus(num1, 4, 9, num1);
    printf("twoSum use minus method: %d, %d\n", *b, *(b+1));
}