#include "mylib.h"
#include <stdio.h>


//Function to check if the number is Armstrong
int isArmstrong(int num) {
    int t,rem, sum=0, count=0;
    t=num;
    while(t>0) {
        t= t/10;
        count++;
    }
    t=num;
    
    while(t>0){
        rem= t%10;
        int power = 1;
        for( int i=0; i<count; i++) {
            power =power*rem;
        }
        sum = sum+power;
        t=t/10;
        }
        if( num==sum) {
            return 1;
        }else {
            return 0;
        }
}

//Functions to check if number is Adam
int isAdam(int num) {
int a, t, rev=0, rem, sq1, rem2, rev2=0, sq2;
    sq1= num*num;
    t=num;

  while(t>0){
   rem=t%10;
   rev= rev*10+rem;
   t=t/10;
} 
 a=rev*rev;
 
 while(a>0) {
    rem2= a%10;
    rev2= rev2*10 + rem2;
    a=a/10;
}
 if (rev2==sq1){
    return 1;
} else{ 
   return 0;
}

}

 int isPrimePalindrome(int num){
    if(num<2)
    return 0;

    int t=num, rev=0;
    
    while(t>0) {
        int digit = t % 10;
        rev = rev*10 + digit;
        t = t/10;
 }  
 
 if (num==rev) {
    int isPrime = 1;
    for(int i=2; i*i<=num; i++) {
        if(num%i==0) {
            isPrime=0;
            break;
        }
    }
    if (isPrime) {
        return 1;
    }
 }
return 0;

}