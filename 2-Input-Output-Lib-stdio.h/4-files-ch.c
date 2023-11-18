/*
- Write an application that makes a copy of an existing text file
- It must ask the user for the source and copy file name
- Use the mechanisms provided in stdio.h
*/

#include<stdio.h>

void main()
{
    char source[50], target[50];

    printf("Source File Name: ");
    scanf("%s", source);
    printf("Target File Name: ");
    scanf("%s", target);

    FILE *src_file = fopen(source, "r");
    FILE *tgt_file = fopen(target, "w");

    char c = getc(src_file);

    while (c != EOF)
    {
        putc(c, tgt_file);
        c = getc(src_file);
    }
    
}