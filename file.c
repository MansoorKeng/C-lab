#include<stdio.h>
int main (){
    FILE *p;
    int rollno=22;
    char name [10]= "Muizza";
    p=fopen("firstfile.txt", "w");
    fprintf(p, "%d%s", rollno, name);
    fclose(p);
}