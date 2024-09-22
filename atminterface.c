#include<stdio.h>
#include<string.h>
#include<conio.h> 

int main()
{
    char pin[5]; 
    int chnc = 3, c = 0;
    
    start:
    printf("Enter your 4-digit ATM pin: ");
    int i = 0;
    while (i < 4) {
        pin[i] = getch(); 
        printf("*"); 
        i++;
    }
    
    pin[i] = '\0';
    
    if (strcmp(pin, "7699") == 0) {
        printf("\nWelcome to HDFC Bank ATM!\n");
        return 0;
    } else {
        c++;
    }
    
    if (c == 3) {
        printf("\n\aYour ATM card has been blocked!\n");
        return 0;
    } else {
        printf("\n\aWrong pin! Please try again\n");
        printf("You have %d chance(s) left\n", --chnc);
        goto start;
    }
}

