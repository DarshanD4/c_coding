#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int choice;

    printf("Choose an option:\n");
    printf("1. Next alphabet (wrap-around if z/Z)\n");
    printf("2. Check vowel or consonant\n");
    printf("3. Toggle case (upper <-> lower)\n");
    printf("4. Check if digit, letter, or special char\n");
    printf("5. Alphabet position (a=1, z=26)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(choice) {
        case 1:
            if (ch == 'z' || ch == 'Z') printf("Next: %c\n", ch - 25);
            else printf("Next: %c\n", ch + 1);
            break;

        case 2:
            if (isalpha(ch)) {
                char lower = tolower(ch);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                    printf("Vowel\n");
                else
                    printf("Consonant\n");
            } else printf("Not a letter\n");
            break;

        case 3:
            if (islower(ch)) printf("Uppercase: %c\n", toupper(ch));
            else if (isupper(ch)) printf("Lowercase: %c\n", tolower(ch));
            else printf("Not an alphabet\n");
            break;

        case 4:
            if (isdigit(ch)) printf("Digit\n");
            else if (isalpha(ch)) printf("Alphabet\n");
            else printf("Special Character\n");
            break;

        case 5:
            if (isalpha(ch)) printf("Position in alphabet: %d\n", tolower(ch) - 'a' + 1);
            else printf("Not an alphabet\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
