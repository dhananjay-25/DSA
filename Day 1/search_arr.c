/*
Scenario:
As a detective, you're investigating a series of clues left behind at different locations. One of the clues mentions a specific location that might hold the key to solving the mystery. You have a list of all the locations you’ve visited. Your task is to check if the crucial location is among them.

Task:
Write a program to check if the specific location is in the list of locations you have visited.
*/

#include<stdio.h>

int search(int arr[], int n, int elem){
    int k=-1;
    for(int i=0; i<n; i++){
        if(arr[i] == elem){
            k=i;
        }
    }
    return k;
}

int main(){
    int n;
    printf("Enter the nummber of locations visited: ");
    scanf("%d", &n);
    printf("Enter the location tags you visited: \n");
    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
    printf("Enter the location that is to be searched: ");
    int elem;
    scanf("%d",&elem);
    int loc = search(arr, n, elem);
    if(loc == -1){
        printf("You have not visited the location earlier. \n");
    }
    else{
        printf("You have visisted location %d previously. \n", arr[loc]);
    }
    return 0;

}