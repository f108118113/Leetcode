#include <stdio.h>

int singleNumber_first(int* nums, int numsSize) {
    int ans=0;
    for(int i=0; i<numsSize; i++)
    {
        ans = ans^nums[i];
    }
    // printf("ans=%d\n",ans);
}

int singleNumber(int* nums, int numsSize) {
    int count;
    int tmp=0;
    //{2,2,1};
    for(int i=0; i<numsSize; i++)
    {
        count=0;
        tmp=nums[i];
        // printf("nums[i]:%d\n",nums[i]);
        // printf("tmp:%d\n",tmp);
        for(int j=0; j<numsSize; j++)
        {
            if (nums[j]==tmp)
            {
                count++;
                // printf("nums[j]:%d\n",nums[j]);
                // printf("count: %d\n",count);
                if ( count != 1)
                {
                    break;
                }
            }
        }
        if( count == 1)
        {
            return tmp;
        }
    }
    return 0;
}

int main(){
    int aray_1[3]={2,2,1};
    int aray_2[5]={4,1,2,1,2};
    int aray_3[1]={1};

    singleNumber(aray_1,3);

}