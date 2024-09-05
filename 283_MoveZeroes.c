# include <stdio.h>
# include <stdbool.h>
void moveZeroes_bubble(int* nums, int numsSize) {
    
    for(int j=0; j<numsSize; j++){ //or use while
        int count=0;
        for(int i=0; i+1<numsSize; i++){
            
            if((nums[i]==0) && (nums[i+1]!=0))
            {
                count++;
                int tmp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=tmp;
                
            }
            // printf("%d\n",nums[i]);
            
        }
        if(count==0){
            break;
        }
    }
}

void moveZeroes_(int* nums, int numsSize) {
    int tmp[numsSize];
    int count=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] != 0){
            tmp[count]=nums[i];
            // printf("%d\n",tmp[count]);
            count++;
        }
    }
    for(int j=count; j<numsSize; j++)
    {
        tmp[j]=0;
    }
    for(int k=0; k<numsSize; k++ ){
        nums[k]=tmp[k];
    }
}

void moveZeroes(int* nums, int numsSize) {
    int count=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] != 0){
            nums[count]=nums[i];
            // printf("%d\n",nums[count]);
            count++;
        }
    }
    for(int j=count; j<numsSize; j++)
    {
        nums[j]=0;
    }

}

int main(){
    
    int arraytest[6]={4,0,5,3,0,2};
    moveZeroes(arraytest,6);
    return 0;
}