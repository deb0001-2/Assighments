// printing "Adamas University" in C
#include <stdio.h>
int main() {
    printf("Adamas University");
    return 0;
}
//adding to numbers
#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
//subtracting two numbers
#include <stdio.h>
int main() {
    int a, b, difference;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    difference = a - b;
    printf("Difference: %d\n", difference);
    return 0;
}
// multiplication table without loop
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n", n);
    printf("%d x 1 = %d\n", n, n * 1);
    printf("%d x 2 = %d\n", n, n * 2);      
    printf("%d x 3 = %d\n", n, n * 3);
    printf("%d x 4 = %d\n", n, n * 4);
    printf("%d x 5 = %d\n", n, n * 5);
    printf("%d x 6 = %d\n", n, n * 6);
    printf("%d x 7 = %d\n", n, n * 7);
    printf("%d x 8 = %d\n", n, n * 8);
    printf("%d x 9 = %d\n", n, n * 9);
    printf("%d x 10 = %d\n", n, n * 10);
    return 0;
}
// ASCII value of a character
#include <stdio.h>  
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of '%c' is %d\n", c, c);
    return 0;
}