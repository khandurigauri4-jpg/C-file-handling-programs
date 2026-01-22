// input a student's details from user and enter it to a file
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.c" , "w");
    char name[100];
    int age;
    float cgpa;
    if(fptr == NULL)
    {
        printf("data can't be written \n");
        return 0;
    }
    printf("enter name \n");
    scanf("%s" , name);
    printf("enter age \n");
    scanf("%d" , &age);
    printf("enter cgpa \n");
    scanf("%f" , &cgpa);
    fprintf(fptr , "%s \t" , name);
    fprintf(fptr , "%d \t" , age);
    fprintf(fptr , "%f" , cgpa);
    fclose(fptr);
    
    
    
    return 0;
}