//
//  main.c
//  adjacent product
//
//  Created by leny Lopez on 6/11/23.
//
//Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int nums[] = {3, 6, -2, -5, 7, 3};
    int i;
    int biggest=0;
    int currentOperation = 0;
    for (i=0; i<5; i++) {
        currentOperation = nums[i]*nums[i+1];
        printf("%i x %i = %i\n",nums[i],nums[i+1],currentOperation);
        if(i==0){
            biggest = currentOperation;
        }
        if (currentOperation > biggest) {
            biggest = currentOperation;
        }
    }
    printf("%i\n",biggest);
    return 0;
}
