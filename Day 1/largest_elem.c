/*Scenario:
You are a treasure hunter exploring a series of ancient caves, each containing a different number of gold coins. You have a map with the number of coins in each cave. Your goal is to find the cave with the most coins to maximize your treasure.

Task:
Write a program to find the cave with the largest number of gold coins.
*/
#include<stdio.h>
//Each element in a array represents the number of coins in each cave
int largest_elem(int arr[], int n){
    int max= arr[0];
    for (int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    printf("Enter the number of caves: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of coins in each cave: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max= largest_elem(arr, n);
    printf("The cave with highest number of coins is %d \n", max);
    return 0;
}