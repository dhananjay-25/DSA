/*
Scenario:
You're an archaeologist deciphering an ancient code. The code is written backward, and you need to reverse the sequence of symbols to read the message correctly. Each symbol corresponds to a specific instruction in the treasure map.

Task:
Write a program to reverse the sequence of symbols to decode the message.
*/

#include <stdio.h>

int rev_arr(int arr[], int n){
    int temp;
    for (int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1]= temp;
    }
    return 0;
}

int main(){
    int n;
    printf("Enter the number of symbols in code: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the symbols: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    rev_arr(arr, n);
    printf("The decoded message is: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

