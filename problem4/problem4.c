/*
Michael Vogt
task: find the largest product of two three digit numbers
that is a palidrome
*/
#include <stdio.h>

//function used to reverse a number
int palidrome(int num){
    int pal= 0;
    int remainder=0;
    while(num != 0){
        remainder = num % 10;
        pal = pal *10 + remainder;
        num = num/10;
    }
    return pal;
}

//go through the product of all 3 digit numbers
//and find the largest one that is a palidrome
int main(){
    int num1 = 999;
    int num2 = 999;
    int max = 0;
    int prod = 0;
    int pal = 0;
    while(num1 >=100){
        prod = num1*num2;
        pal = palidrome(prod);
        if(prod == pal && prod > max){
            max = prod;
        }
        num2-=1;
        if(num2 <100){
            num2 = 999;
            num1-=1;
        }
    }
    printf("%d",max);
    return 0;
}