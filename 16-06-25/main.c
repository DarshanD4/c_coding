#include <stdio.h>

int main()
{
	// 1
	// for (int i=0;i<5;i++){
	//     for (int j=0;j<5;j++)
	//     {
	//         printf("%d",i);
	//     }printf("\n");
	// }
	// 2
	// int a ;
	// int b ;
	// printf("enter the numbers :");
	// scanf("%d %d",&a,&b);
	// for (int i=0;i<a;i++){
	//     for (int j=0;j<b;j++)
	//     {
	//         if (i==0 || i==a-1 ||j==0 || j==b-1)
	//         printf("*");
	//         else printf(" ");
	//     }printf("\n");
	// }
	// 3
    // 	int a =5 ;
    // 	int b =5 ;
    // 	//scanf("%d %d",&a,&b);
    // 	for (int i=0; i<5; i++) {
    // 		for (int j=0; j<5; j++) {
    // 			if((i+j+1)>5) {
    // 				printf("%d",i+j-4);
    // 			}
    // 			else{
    // 			printf("%d",i+j+1);
    // 		}}
    // 		printf("\n");
    // 	}
    //or for third sum
    // 	int a =5 ;
    // 	int b =5 ;
    // 	//scanf("%d %d",&a,&b);
    // 	for (int i=0; i<5; i++) {
    // 		for (int j=0; j<5; j++) {
    // 			printf("%d",((i+j)%5)+1);
    // 			}
    // 			printf("\n");
    //}
    // 4(1 triangle)
    // for (int i=0; i<5; i++) {
    //     for (int s)
    //     for (int j=0; j<=i; j++) {
    //         printf("*");
    //     }printf("\n");
    // }
    //4( 2 triangle)
    // for (int i=0; i<5; i++) {
    //     for (int s=0;s<(5-i)-1;s++){
    //         printf(" ");
    //     }
    //     for (int j=0; j<=i; j++) {
    //         printf("*");// add space for triangle
    //     }printf("\n");
    // }
    //4( 3 priamid)
    for (int i=0; i<5; i++) {
        for (int s=0;s<(5-i)-1;s++){
            printf("0");
        }
        for (int j=0; j<=(i*2); j++) {
            printf("*");
        }printf("\n");
    }
}