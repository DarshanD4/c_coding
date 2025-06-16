#include <stdio.h>
#include <stdbool.h>
//14/6/2025 c class
// int main()
// {   int a;
//     scanf("%d",&a);
//     for (int i=0;i<=a;i++){
//         printf("%d \n",i);
//         if(i%2==0){
//             printf("even ");}
//         else {
//             printf("odd ");}
    
//     }
//     return 0;
// }
// int main(){
//     int a;
//     bool prime =true;
//     scanf("%d",&a);
//     for(int i=2;i<a;i++){
//         if(a%i==0){
//             prime =false;
//             break;
//         }
//     }
//     if(prime){
//         printf("prime\n");
//     }
//     else {printf("not prime\n");
// }}
// sum of numbers
// int main(){
//     int a;
//     int b=0;
//     scanf ("%d",&a);
//     for (int i=1;i<=a;i++){
//         b=b+i;
//     }
//     printf("%d",b);
// }
// factorial
// int main(){
//     int a;
//     int b=1;
//     scanf("%d",&a);
//     for (int i=1;i<=a;i++){
//         b=b*i;
//     }
//     printf("%d",b);
// }
//  sum of factorial
int main() {
    int a;
    scanf("%d", &a);

    int sum = 0;

    for (int i = 1; i <= a; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += fact;
    }

    printf("%d\n", sum);
    return 0;
}