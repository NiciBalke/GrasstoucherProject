#include <stdio.h>
#include <math.h>

#define ARRAY_LENGTH(x) (sizeof(x)/sizeof((x)[0]))


//return the smallest missing in from array. return length if all numbers from 0 to length-1 are present.
int SmallestMissingInt(int length, int array[]){
    int copy[length];


    for(int k=0;k<length;k++) copy[k] = 0; // delete garbage values

     
    int i;
    for(i=0;i<length;i++){
        int new = array[i];
        if(new < length && new >= 0){
            copy[new] = 1;
        }
        
    }

    int j;
    int result = -1;
    for(j=0;j<length;j++){
        if(copy[j] == 0){
            result = j;
            return result;
        }
    }

    return length;
}
