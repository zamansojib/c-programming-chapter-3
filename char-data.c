#include <stdio.h>
#include <ctype.h>
int main(void){

//     char ch1 = 65;
//     char ch2 = 'B' + 2;
//     printf("character = %c\n",ch1);
//     printf("chracter to decimal = %d\t%c\n",ch2,ch2);
    
//     char ch3 = 113;
//     printf("char - %c\n",ch3);
    
//     char ch4 = 'G' + 10;
//     printf("character to number = %c\t%d\n",ch4,ch4);

//     unsigned char negative = -68;
//     printf("%c\n");
   

//    char ch5 = '0';
//    printf("character c = %c\n",ch5);
//    printf("character int = %d\n",ch5);

// char Ch = 258;
// printf("%d\n",Ch);

//    char letter = 'A';
//    printf("%d\n",letter);
//    char digit = '9';
//    printf("%d\n",digit);
//    char exclamation = '!';
//    printf("%c\n",exclamation);
//    char newline = '\n';
//    char tab = '\t';
//    char single_quote = '\'';

//    printf("%d\n",newline);
//    printf("%c\n",tab);
//    printf("%d\n",single_quote);
    //   char second = 63;
    //   printf("The second example as a letter looks like this - %c\n", second);
    //   printf("The second example as a number looks like this - %x\n", second);


    //   char letter = 'A';
    //   letter = letter+3;
    //   printf("%d\n",letter);
      

    //   char ch = 0;
    //   printf("Enter your caharacter: ");
    //   scanf("%c",&ch);
    //   printf("your expectable character is: %c and the code value is: %d\n",ch,ch);

        //  char first = 'A';
        //  char second = 'B';
        //  char last = 'Z';

        //  char number = 40;
         
        //  char ex1 = first + 2;
        //  char ex2 = second - 1;
        //  char ex3 = last + 2;
        //  printf("character values: %-5c%-5c%-5c\n",ex1,ex2,ex3);
        //  printf("Numerical Equivalents: %-5d%-5d%-5d\n",ex1,ex2,ex3);
        //  printf("the number %d is the code for the character %c\n",number,number);
         

        //  char minus = 'a' - 'A';
        //  printf("%d\n",minus);

        char u = 'A';
        char l = tolower(u);
        printf("%c is the lowercase of %c\n",u,l);

        char lc = 'a';
        char uc = toupper(u);
        printf("%c is the Uppercase of %c\n",lc,uc);
    return 0;
}