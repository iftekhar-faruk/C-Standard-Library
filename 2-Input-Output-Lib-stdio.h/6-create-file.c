// Program to illustrate creating file

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    // opening the file in read mode
    fp = fopen("file1.txt","w");

    // checking if the file is opened successfully
    if(fp == NULL){
        printf("Cannot open file.\n");
        exit(1);
    }
    else{
        printf("The file is created successfully.\n");
    }

    return 0;
}