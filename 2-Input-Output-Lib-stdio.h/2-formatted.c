#include <stdio.h>

void main()
{
    int i;
    char c;
    float f;
    double d;
    char str[30];

    scanf("%i %c %f %lf %[^\n]s", &i, &c, &f, &d, str);

    printf("Integer: %i\nCharacter: %d\nFloat: %f\nDouble: %lf\nString: %s\n\n", i, c, f, d, str);
}