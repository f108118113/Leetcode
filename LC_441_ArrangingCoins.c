# include <stdio.h>


int arrangeCoins_second_solution(int n)
{
    int level = 1;
    int ans = 1;
    long int sum = 0;
    while(1){
        sum = (long)(1+level) * level /2;
        if(sum < n){
            level ++;
        }
        if(sum > n)
        {
            ans = level - 1;
            return ans;
            break;
        }
        if(sum == n)
        {
            ans = level;
            return ans;
            break;
        }
    }
}

int arrangeCoins(int n)
{
    int level = 1;
    int ans = 1;
    long int sum = 0;
    while(1){
        sum = (long)(1 + level) * level /2;
        if(sum < n){
            level ++;
        }
        if(sum > n)
        {
            ans = level-1;
            printf("ans:%d\n",ans);
            return ans;
            break;
        }
        if(sum == n)
        {
            ans = level;
            printf("ans:%d\n",ans);
            return ans;
            break;
        }
    }
}


int main(){
    arrangeCoins(5);
}