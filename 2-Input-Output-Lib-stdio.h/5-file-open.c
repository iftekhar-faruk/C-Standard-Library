// Program to illustrate file opening

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    // opening the file in read mode
    fp = fopen("file1.txt","r");

    // checking if the file is opened successfully
    if(fp == NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    return 0;
}