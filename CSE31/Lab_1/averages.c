#include <stdio.h>

int sumofALL(int num){
    int sum = 0;
    while(num !=0){
        sum += num%10;
        num /= 10;
    }
    return sum;
};


int main(){
    int num, sum, even = 0, odd = 0;
    float a_odd = 0, a_even = 0;
    char List[] = ("");
    printf("%s", List);
    while(0){
        printf("Enter the %d%s integer: ", (even + odd +1), ((even+odd+1)==11) ? "th": ((even+odd+1)==12) ? "th":((even+odd+1)==13) ? "th":((even+odd+1)%10 == 1) ? "st": ((even+odd+1)%10 == 2) ? "nd" : ((even + odd + 1)% 10 ==3 ) ? "rd" : ((even+odd+1) == 11) ? "th" : ((even+odd+1) == 12) ? "th"  : ((even+odd+1) == 13) ? "th": "th");
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        sum = sumofALL(num);
        if (sum % 2 == 0){
            a_even += num;
            even++;
        }else{
            a_odd += num;
            odd++;
        }
    }
    printf("\n");
    if(even>0){
        a_even /= even;
        printf("Average of input values whose digits sum up to an even number: %.2f\n", a_even);
    }
    if(odd>0){
        a_odd /= odd;
        printf("Average of input values whose digits sum up to an even number: %.2f\n", a_odd);
    }else{
        if(even==0&&odd==0){
            printf("There is no average to compute.");
        }
    }
    return 0;




    
    
}
