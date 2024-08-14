/*
Scenario:
You’re a historian examining a mirror-image manuscript. The entire manuscript is written backward, as if viewed through a mirror. To understand the text, you need to reverse each line to read it correctly.

Task:
Write a program to reverse the text in the manuscript so you can read it.
*/

#include<stdio.h>

int strev(char str[]){
    char temp;
    int len = 0;
    while(str[len] != '\0'){
        len++;
    } 
    len=len-1; // to avoid new line character
    for(int i=0; i<len/2; i++){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return 0;

}

int main(){
    char str[50];
    printf("Enter the text: ");
    fgets(str, sizeof(str), stdin);
    strev(str);
    printf("Reverse text is: \n");
    puts(str);
    return 0;
}