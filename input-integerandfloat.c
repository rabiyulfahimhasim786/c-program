# include <stdio.h>

int main() {
    int x;
    float f;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("The Value is %d", x);
    printf("Enter a decimal number:");
    scanf("%f",&f);
    printf("The integer number is %d and the floating point number is %f", x,f);
    return 0;
}
