/*Scenario:
You're a librarian tasked with organizing a collection of ancient scrolls. Each scroll contains a message of varying length. Before cataloging them, you need to determine the length of each scroll’s message to categorize them accurately.

Task:
Write a program to find the length of each scroll's message.
*/

#include<stdio.h>

int stlen(char str[])
{
    int len=0;
    while(str[len] != '\0'){
        len++;
    } 
    return len-1;
}

int main(){
    char str[50];
    printf("Enter the string to find length: ");
    fgets(str, sizeof(str), stdin);
    int len = stlen(str);
    printf("Length of string is: %d \n", len);
    return 0;
}