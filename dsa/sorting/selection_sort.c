#include <stdio.h>int main(void) {    int arr[] = {10, 34, 1, 500, 29, 2};    int last_idx, smallest;    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {         smallest = arr[i];         last_idx = -1;         for(int j = i+1; j < sizeof(arr)/sizeof(arr[0]); j++) {             if(smallest > arr[j]) {                 smallest = arr[j];                 last_idx = j;             }         }         if(last_idx < 0)         	continue;         arr[i] += arr[last_idx];         arr[last_idx] = arr[i] - arr[last_idx];         arr[i] -= arr[last_idx];    }    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {        printf("%d\n", arr[i]);    }    return 0;}