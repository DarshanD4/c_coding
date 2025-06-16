/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    printf("enter a character:");
    scanf("%c", &a);
    if(a=='z' || a=='Z'){
        printf("%c",a-25);
    }
    else{
        printf("%c",a+1);
    }
    // printf("%d %d %d %d",'a','z','A','Z');
    
    return 0;
}