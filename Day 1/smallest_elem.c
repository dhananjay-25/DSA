/*Scenario:
You're a botanist studying a rare species of flowers that grow at different heights. You want to find the shortest flower to determine the minimum height in the species. This will help you understand the environmental conditions required for its growth.

Task:
Write a program to identify the shortest flower from the list of heights you have collected.
*/

#include<stdio.h>

int smallest_elem(int arr[], int n){
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n, i;
    printf("Enter the number of flowers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the heights of flowers: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = smallest_elem(arr, n);
    printf("The smallest height of flower is %d \n", min);

    return 0;
}