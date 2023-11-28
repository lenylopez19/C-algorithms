//
//  main.c
//  pisoMasAlto
//
//  Created by leny Lopez on 13/11/23.
//

#include <stdio.h>

int largestAltitude(int* gain, int gainSize){
    int largest;
    int piso = 0;
    int i;
    for (i=0; i<gainSize; i++) {
        if (i==1) {
            largest = gain[i];
        }
        piso += gain[i];
        if (piso > largest) {
            largest = piso;
        }
    }
    return largest;
}


int main(int argc, const char * argv[]) {
    int arr[]= {-5,1,5,0,-7};
    printf("%i",largestAltitude(arr, 5));
    
    return 0;
}
