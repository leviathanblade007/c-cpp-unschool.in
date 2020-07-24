#include<stdio.h>
struct Employee
{
char name[50];
int eId;
int exp;
float sal;
}E[5];
void main()
{
int i;
printf("ENTER THE DETAILS\n");
for(i=0;i<5;i++)
{
printf("NAME OF %d  EMPLOYEE\n",i+1);
scanf(" %s",&E[i].name);
printf("ID OF %d  EMPLOYEE\n",i+1);
scanf(" %d",&E[i].eId);
printf("EXPERIENCE OF %d EMPLOYEE\n",i+1);
scanf(" %d",&E[i].exp);
printf("SALARY OF %d  EMPLOYEE\n",i+1);
scanf(" %f",&E[i].sal);
}
for(i=0;i<5;i++)
{
printf("NAME OF %d EMPLOYEE IS %s\n",i+1,E[i].name);
printf("ID OF %d EMPLOYEE IS %d\n",i+1,E[i].eId);
printf("EXPERIENCE OF %d EMPLOYEE IS %d\n",i+1,E[i].exp);
printf("SALARY OF %d EMPLOYEE IS %.2f\n",i+1,E[i].sal);
}
}


