// 1.
//  n=3
//      0
//    1 0 1
//  2 1 0 1 2
// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
//     int a=5;
//     for (int i=0;i<a;i++){
//         for (int s=0;s<(a-i)+1;s++){
//              printf(" ");
//         }
//         int temp =i;
//          for (int j=0; j<=(i*2); j++) {
//              printf("%d",abs(temp--));
//              //printf("(%d %d)",i,j);
//          }
//          printf("\n");

//     }
//     return 0;
// }
// 2. n=3
// *     *
//    *
// *     *
// (both first (* and  1  and string (bob)))
// 1     1
//    2
// 3     3
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char b[100]="bob";
//     int a=strlen(b);

//     for (int i=0;i<a;i++){
//         for (int j=0; j<=a; j++) {
//             if(i==j){
//                 printf("%c",b[i]);//(for integer use ("%d",i+1))
//             }
//             else if((i+j)==(a-1)){
//                 printf("%c",b[j]);//(for integer use ("%d",j+1))
//             }
//             else
//              printf(" ");
//              //printf("(%d %d)",i,j);
//          }printf("\n");
//     }
//     return 0;
// }


// butterfly pattern
// #include <stdio.h>

// int main() {
// 	int a = 5;
// 	a = a + 1;

// 	for (int i = 1; i <= a; i++) {
// 		for (int j = 1; j <= i; j++) {
// 			printf("*");
// 		}
// 		for (int j = 1; j <= 2 * (a - i); j++) {
// 			printf(" ");
// 		}
// 		for (int j = 1; j <= i; j++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}

// 	for (int i = a - 1; i >= 1; i--) {
// 		for (int j = 1; j <= i; j++) {
// 			printf("*");
// 		}
// 		for (int j = 1; j <= 2 * (a - i); j++) {
// 			printf(" ");
// 		}
// 		for (int j = 1; j <= i; j++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }

// #include <stdio.h>

// int main() {
// 	for(int i=0; i<5; i++) {
// 		for(int j=0; j<5; j++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	for(int i=0; i<3; i++) {
// 		for(int j=0; j<8; j++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=i; j++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	for(int i=5; i>=1; i--) {
// 		for(int j=1; j<=i; j++) {
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=i; j++) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		for(int j=i; j>=1; j--) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=5; i>=1; i--) {
// 		for(int j=i; j<=5; j++) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=5; i>=1; i--) {
// 		for(int j=5; j>=i; j--) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=0; i<5; i++) {
// 		for(int j=i+1; j<=5; j++) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=5; i>=1; i--) {
// 		for(int j=i; j>=1; j--) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=5; i>=1; i--) {
// 		for(int j=5; j>=6-i; j--) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=5; i>=1; i--) {
// 		for(int j=i; j>=1; j--) {
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		int val=(i%2==0)?2:1;
// 		for(int j=1; j<=i; j++) {
// 			printf("%d",val);
// 			val+=2;
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


