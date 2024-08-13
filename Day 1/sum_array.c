/*
Scenario:
You’re organizing a charity run and need to calculate the total distance covered by all participants. Each participant ran a different distance, and you have a list of the distances they covered. To plan future events, you need to know the total distance run by everyone.

Task:
Write a program to calculate the total distance covered by all participants.
*/

#include<stdio.h>

int sum_arr(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the number of participants: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the distances covered by  each athelete: \n");
    for(int i=0;i<n; i++)
    scanf("%d",&arr[i]);

    int sum = sum_arr(arr, n);
    printf("Total distance covered by all participants is %d \n", sum);
    return 0;
}