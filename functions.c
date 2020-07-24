#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    char s1[50],s2[50],s[50];int i,l;double j,k;
    printf("ENTER 2 STRINGS\n");
    gets(s1);
    gets(s2);
    if(strcmp(s1,s2)==0)
        printf("STRINGS ARE SAME\n");//Compares 2 string by strcmp()
    else
        printf("String are different\n");
    strcpy(s,s1);
    printf("%s\n",s1);//copies string s2 to s1 by strcpy()
    fflush(stdin);
    printf("reversed string is %s\n",strrev(s1));//reverses a string by strrev()
    i=strlen(s1);
    fflush(stdin);
    printf("length of %s is %d\n",s1,i);//check the length by strlen()
    printf("string converted to upper case is %s\n",strupr(s2));//converts to uppercase using strupr()
    printf("string converted to lower case is %s\n",strlwr(s2));//converts to lower case using strlwr()
    printf("ENTER A NO");
    scanf("%lf",&j);
    k=pow(j,2);
    printf("power of %lf is %lf\n",j,k);//calculates power of a no
    k=sqrt(j);
    printf("square root of %lf is %lf\n",j,k);//calculates root of a no
    printf("round up of %lf is %lf\n",j,ceil(j));//rounds of to nearest integer greater than the no
    printf("round down of %lf is %lf\n",j,floor(j));//rounds off to nearest integer smaller than the no
    srand(time(0));
    l=rand() %6 +1;//calculates a random no between 1 and 6
    printf("random no between 1 and 6\n is %d",l);
}




