#include <stdio.h>
#include <stdbool.h>

int sum(long int n){
    int tmp = 0;
    int sum = 0;
    for (long int i=1; i<=n; i=i*10){
        tmp = n / i % 10;
        sum = sum + tmp*tmp; 
    }
    return sum;
}
bool isHappy_first(int n){
    int tmp = n;
    if(tmp == 1){
        return true;
    }
    while(tmp != 1)
    {
        tmp=sum(tmp);
        if(tmp==1){
            return true;
        }
        else if(tmp == 4){
            return false;
        }
    }
    return false;
}

bool isHappy(int n) {
    
    int slow = sum(n);
    int fast = sum(slow);
    int i = 0;
    printf("%d\n",slow);
    printf("%d\n",fast);
    if(slow == 1 || fast == 1){
        return true;
    }
    else if(slow == fast){
        return false;
    }
    while(slow != 1){
        slow = sum(slow);
        fast = sum(sum(fast));
        i ++;
        printf("%d\n",i);
        printf("%d\n",slow);
        printf("%d\n",fast);
        if(slow == 1 || fast == 1){
            printf("HIHI");
            return true;
        }
        else if(slow == fast){
            
            return false;
        }

    }
    return false;
}


int main()
{
    isHappy(19);
    isHappy(12345);
    return 0;
}