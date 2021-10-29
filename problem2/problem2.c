#include <stdio.h>
/*
Taken from problem 2
find the sum of all even fibonacci numbers
less than 4 million
*/
int main(){
    //p1 and p2 hold the previous two values in the fibonacci sequence
    //current holds the lastest value in the fibonacci sequence
    int p1 = 0;
    int p2 = 1;
    int current = 0;
    int sum = 0;
    //continue looping until it is greater than 4 million
    while (current < 4000000)
    {
        //if it is even add it to sum
        if(current%2 == 0){
            sum+=current;
        }
        //add in previous two values to get new value
        current = p1+p2;
        p1 = p2;
        p2 = current;
    }   
    printf("The sum of all even fibonacci numbers is %d",sum);
    return 0;
}