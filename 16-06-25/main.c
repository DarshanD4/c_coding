#include <stdio.h>

// int main()
// {
// 	1
// 	for (int i=0; i<5; i++) {
// 		for (int j=0; j<5; j++)
// 		{
// 			printf("%d",i);
// 		}
// 		printf("\n");
// 	}
// 	2
// 	int a ;
// 	int b ;
// 	printf("enter the numbers :");
// 	scanf("%d %d",&a,&b);
// 	for (int i=0; i<a; i++) {
// 		for (int j=0; j<b; j++)
// 		{
// 			if (i==0 || i==a-1 ||j==0 || j==b-1)
// 				printf("*");
// 			else printf(" ");
// 		}
// 		printf("\n");
// 	}
// 	3
// 	int a =5 ;
// 	int b =5 ;
// 	//scanf("%d %d",&a,&b);
// 	for (int i=0; i<5; i++) {
// 		for (int j=0; j<5; j++) {
// 			if((i+j+1)>5) {
// 				printf("%d",i+j-4);
// 			}
// 			else {
// 				printf("%d",i+j+1);
// 			}
// 		}
// 		printf("\n");
// 	}
// 	or for third sum
// 	int a =5 ;
// int b =5 ;
// //scanf("%d %d",&a,&b);
// for (int i=0; i<5; i++) {
// 		for (int j=0; j<5; j++) {
// 			printf("%d",((i+j)%5)+1);
// 		}
// 		printf("\n");
// 	}
// 	4(1 triangle)
// 	for (int i=0; i<5; i++) {
// 		for (int s)
// 			for (int j=0; j<=i; j++) {
// 				printf("*");
// 			}
// 		printf("\n");
// 	}
// 	4( 2 triangle)
// 	for (int i=0; i<5; i++) {
// 		for (int s=0; s<(5-i)-1; s++) {
// 			printf(" ");
// 		}
// 		for (int j=0; j<=i; j++) {
// 			printf("*");// add space for triangle
// 		}
// 		printf("\n");
// 	}
// 	4( 3 priamid)

// 	for (int i=0; i<4; i++) {
// 		for (int s=0; s<(4-i)-1; s++) {
// 			printf(" ");
// 		}
// 		for (int j=0; j<=(i*2); j++) {
// 			printf("%d",i*1);
// 		}
// 		printf("\n");
// 	}
// 	int num=1;
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=i; j++) {
// 			printf("%d",num++);
// 		}
// 		printf("\n");
// 	}
// 	int c=1;
// 	for(int i=1; i<=5; i++) {
// 		if(i==2)c+=1;
// 		else if(i==4)c+=4;
// 		for(int j=1; j<=i; j++) {
// 			printf("%d",c);
// 			c+=(i==2||i==4)?-1:1;
// 		}
// 		printf("\n");
// 	}
// 	int n=1;
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=i; j++) {
// 			printf("%d",n);
// 			n++;
// 		}
// 		printf("\n");
// 	}
// 	int k=1;
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=i; j++) {
// 			printf("%d",k);
// 			if(j<i)printf("*");
// 			k++;
// 		}
// 		printf("\n");
// 	}
// 	int val=1;
// 	for(int i=0; i<5; i++) {
// 		for(int j=0; j<5; j++) {
// 			printf("%d",i%2==0?val++:val--);
// 		}
// 		if(i%2!=0)val+=6;
// 		printf("\n");
// 	}
// 	int p=1;
// 	for(int i=0; i<5; i++) {
// 		for(int j=0; j<5; j++) {
// 			printf("%d",i%2==0?p++:--p);
// 			if(j<4)printf("*");
// 		}
// 		if(i%2==0)p+=4;
// 		else p+=6;
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=5-i; j++)printf(" ");
// 		for(int j=1; j<=5; j++)printf("*");
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<i; j++)printf(" ");
// 		for(int j=1; j<=5; j++)printf("*");
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=5-i; j++)printf(" ");
// 		for(int j=1; j<=i; j++)printf("*");
// 		printf("\n");
// 	}
// 	for(int i=5; i>=1; i--) {
// 		for(int j=5; j>i; j--)printf(" ");
// 		for(int j=1; j<=i; j++)printf("*");
// 		printf("\n");
// 	}
// 	for(int i=1; i<=5; i++) {
// 		for(int j=1; j<=5-i; j++)printf(" ");
// 		for(int j=1; j<=i; j++)printf("%d",j);
// 		for(int j=i-1; j>=1; j--)printf("%d",j);
// 		printf("\n");
// 	}
// 	return 0;
// }
