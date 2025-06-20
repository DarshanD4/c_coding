/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
// int main()
// { 
//     int a=10;
//     //int *ptr=&a;             //& address //* data value
//     // printf("%p\n",ptr);
//     // printf("%p\n",&a);
//     // printf("%d\n",*ptr);
//     // printf("%d\n",a);
//     // printf( "\n \n \n \n \n ");
//     int *ptr =malloc(sizeof(int));
//     *ptr =10;
//     printf("%p\n",ptr);
//     printf("%d\n",*ptr);
    
//     return 0;
    
// }
// 2. pointer with function
// void hi(int *p){
//     *p+=1;
    
// }
// void hello(char *p){
//     *p+=1;
// }
// int main(){
//     int a=10;
//     char ch ='D';
//     hi(&a);
//     hello(&ch);
//     printf("%d\n",a);
//     printf("%c\n",ch);
//     return 0;
// }
// 3.reference by value
// void add(int a,int b){
//     printf("%d\n",++a);
// }
// int main(){
//     int a=10,b=9;
//     add(a,b);
//     printf("%d,%d",a,b);
// }
// 4.pointer
int main()
{   //simple
    int a=10;
    //int *ptr=&a;
    //NULL
    int *ptr1 =NULL;
    //void
    void *ptr = &a;
    //printf("%p",ptr);
    //printf("%d",*ptr);//warning: dereferencing ‘void *’ pointer(return value from void )
    //wild pointer 
    int *wildptr;//(pointer without the data but gives address)
    //printf("%p",wildptr);
    //dangling pointer
    int *dptr=malloc(sizeof(int));
    // printf("%p\n",dptr);
    *dptr =35;
    //printf("%d\n",*dptr);
    //printf("%p\n",dptr);
    free(dptr);
    //*dptr == NULL;
    //printf("%p\n",dptr);
    //printf("%d\n",*dptr);
    //pointer to pointer
    int *p=&a;
    int **p1=&p;
    printf("A address %p\n",p);
    printf("P address %p\n",p1);
    printf("**P address %p\n",*p1);
    printf("**P value %d\n",**p1);
}




















