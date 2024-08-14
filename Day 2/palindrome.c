/*
Scenario:
You’re exploring an ancient temple where the prophecy says that only a word that reads the same forward and backward can unlock the hidden chamber. You need to check if the word inscribed on the temple door is a palindrome to see if it can unlock the door.

Task:
Write a program to determine if the word is a palindrome.
*/

#include<stdio.h>

int palindrome(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    } 
    len -=1; // to avoid new line character
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len -i -1])
        return 0;
    }
    return 1;

}


int main(){
    char str[50];
    printf("Enter the text: ");
    fgets(str, sizeof(str), stdin);
    int k = palindrome(str);
    if(k==1){
        printf(" %s is palindrome. \n", str);
    }
    else{
        printf("%s is not palindrome. \n",str);
    }
    return 0;
}