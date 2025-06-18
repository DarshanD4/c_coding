//  #include <stdio.h>
//  #include <string.h>

// int main() {
// 	char str[100];
// 	scanf("%s", str);

// 	for (int i = 0; i < strlen(str); i++) {
// 		if (str[i] >= 'A' && str[i] <= 'Z') {
// 		    if (str[i] == 'Z'){
//                 printf("%c",str[i] + 7);
//             }
// 			printf("%c", str[i] + 33);
// 		} else if (str[i] >= 'a' && str[i] <= 'z') {
// 		    if (str[i] == 'z'){
//                 printf("%c",str[i] - 57);
//             }
// 			printf("%c", str[i] - 33);
// 		}
// 		else {
// 			printf("%c", str[i]);
// 		}
// 	}

// 	return 0;
// }
// 	char a;
// 	printf("Find whether alphabet,number or special character \n");
// 	printf("Enter the character : ");
// 	scanf("%c",&a);
// 	if(a >= 'a' & a <= 'z' || a >= 'A' & a <= 'Z' ) {
// 		printf("Alphabet");
// 	}
// 	else if (a >= '0' & a <= '9') {
// 		printf("Number");
// 	}
// 	else {
// 		printf("Special character");
// 	}

// 	4.
// 	int a;
// 	printf("Check Leap year or not \n");
// 	printf("Enter the Year : ");
// 	scanf("%d",&a);
// 	if(a%4 == 0 & a%100 != 0) {
// 		printf("Leap Year");
// 	}
// 	else {
// 		printf("Not a Leap Year");
// 	}

// 	5.
// 	int a;
// 	printf("Map numbers(1-7) to week names \n");
// 	printf("Enter a number : ");
// 	scanf("%d",&a);
// 	if(a == 1) {
// 		printf("Monday");
// 	}
// 	else if(a == 2) {
// 		printf("Tuesday");
// 	}
// 	else if(a == 3) {
// 		printf("Wednesday");
// 	}
// 	else if(a == 4) {
// 		printf("Thursday");
// 	}
// 	else if(a == 5) {
// 		printf("Friday");
// 	}
// 	else if(a == 6) {
// 		printf("Saturday");
// 	}
// 	else if(a == 7) {
// 		printf("Sunday");
// 	}

