//Prints ASCII value of given character

#include <stdio.h>

int main(){
    char ch;

    printf("Enter Character: ");
    scanf("%c",&ch);

    printf("The ASCII Value of %c is %d", ch, ch);

    return 0;
}
