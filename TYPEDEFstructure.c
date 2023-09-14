# include<stdio.h>
# include<string.h>

// NEVER FORGOT TO WRITE ""typedef"" }:(

 typedef struct wehavetolearnevrythingincomputerscienceengineering{
char name[100];
int roll;
float cgpa;

} coe ;

int main(){

    coe s1 = {"shresth", 88 , 9.6};
printf("student name = %s\n", s1.name);
printf("roll number = %d\n",s1.roll);
printf("cgpa = %f\n",s1.cgpa);

    return 0 ;
}