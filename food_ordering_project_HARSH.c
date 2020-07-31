//THIS CODE IS WRITTEN BY HARSH
#include <stdio.h>
#include <string.h>
struct order
{
    int ordrno;
    char n[50];
    int noofitems;
    int cost;
}
H[1000];
int nooforder=0;
int noofserved=0;
int waitinglist=0;
void items()
{
    printf("................................................MENU..................................................\n\n\n");
    printf("Item Code-----------------------------------Description------------------------------------------Price\n");
    printf("    1-------------------------------------PANEER BIRYANI-----------------------------------------180\n");
    printf("    2-------------------------------------CHICKEN BIRYANI----------------------------------------200\n");
    printf("    3---------------------------------------EGG BIRYANI------------------------------------------150\n");
    printf("    4--------------------------------------MIXED BIRYANI-----------------------------------------250\n");
    printf("    5--------------------------------CHICKEN TIKKA BUTTER MASALA---------------------------------180\n");
    printf("    6-------------------------------------CHICKEN TANDOORI---------------------------------------145\n");
    printf("    7---------------------------------PANEER TIKKA BUTTER MASALA---------------------------------150\n");
    printf("    8--------------------------------MASHROOM TIKKA BUTTER MASALA--------------------------------165\n");
    printf("    9------------------------------------BUTTER TANDOORI ROTI------------------------------------15\n");
    printf("   10----------------------------------------COLD DRINKS-----------------------------------------75\n\n");
}
void orderprocess()
{
    char z;
    int m,o,p;
    printf("\nEnter your name please : \n");
    gets (H[nooforder].n);
    H[nooforder].ordrno=10000+nooforder;
    items();
    H[nooforder].noofitems=m;
    H[nooforder].cost=0;
    H[nooforder].noofitems = 0;
    onceagain:
    printf("\nHow many orders you want to place ?\n");
    scanf ("%d",&m);
    getchar();
    while (m!=0)
    {
        printf("\nEnter chosen item code\n");
        scanf("%d",&o);
        getchar();
        switch(o)
        {
        case 1:
        {
        printf("\nPlease enter the quantity of PANEER BIRYANI : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(180*p);
        break;
        }
        case 2:
        {
        printf("\nPlease enter the quantity of CHICKEN BIRYANI : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(200*p);
        break;
        }
        case 3:
        {
        printf("\nPlease enter the quantity of EGG BIRYANI : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost +=(150*p);
        break;
        }
        case 4:
        {
        printf("\nPlease enter the quantity of MIXED BIRYANI : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(250*p);
        break;
        }
        case 5:
        {
        printf("\nPlease enter the quantity CHICKEN TIKKA BUTTER MASALA : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(180*p);
        break;
        }
        case 6:
        {
        printf("\nPlease enter the quantity of CHICKEN TANDOORI : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(145*p);
        break;
        }
        case 7:
        {
        printf("\nPlease enter the quantity of PANEER TIKKA BUTTER MASALA : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(150*p);
        break;
        }
        case 8:
        {
        printf("\nPlease enter the quantity of MASHROOM TIKKA BUTTER MASALA : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(165*p);
        break;
        }
        case 9:
        {
        printf("\nPlease enter the quantity of BUTTER TANDOORI ROTI : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(15*p);
        break;
        }
        case 10:
        {
        printf("\nPlease enter the quantity of COLD DRINKS : ");
        scanf("%d",&p);
        getchar();
        H[nooforder].noofitems+=p;
        H[nooforder].cost+=(75*p);
        break;
        }
        default :
        {
        printf("\nPLEASE TRY VALID ENTRY\n");
        m++;
        }
        }
        m--;
    }
    printf ("Do you want to order anything else?\nAnswer in (y/n)\n");
    scanf("%c",&z);
    if (z== 'y'||z=='Y')
        goto onceagain;
    printf("\nNumber of food you ordered %d\n",H[nooforder].noofitems);
    printf("\nThank You Mr. %s for your patience . Your bill is %dtk .\n");
    printf("Take some time to relax while the food is being prepared.\n\n",H[nooforder].n,H[nooforder].cost);
    nooforder++;
}
void display()
{
    printf("Total orders                       : %d\n",nooforder);
    printf("Total orders served                : %d\n",noofserved);
    printf("Number of orders in waiting list   : %d\n",(nooforder-noofserved));
    printf("Currently preparing food for order : %d\n\n",H[noofserved].ordrno);
}
int records()
{
    if (nooforder==0)
    {
        printf("WAITING FOR YOU TO ORDER FIRST\n");
        return;
    }
    else if (noofserved == nooforder) {
        printf ("ALL ORDERS ARE SURVED\n");
        return;
    }
    printf("Order no. %d by %s is ready\n",H[noofserved].ordrno,H[noofserved].n);
    printf("Mr. %s , Please enjoy your meal\n\n",H[noofserved].n);
    noofserved++;
}
int main ()
{
    int q;
    printf ("                                   WELCOME TO BHUSHAN BIRYANI PALACE\n");
    while (1)
    {
        printf ("  1. Want to ORDER\n  2. Serve\n  3. Display\n  4. Exit\n");
        scanf ("%d",&q);
        getchar();
        switch (q)
        {
        case 1:
        {
                orderprocess();
                break;
        }
        case 2:
        {
                records();
                break;
        }
        case 3:
        {
                display();
                break;
         }
        case 4:
        {
                printf("PLEASE PAY US VISIT ONCE AGAIN IF YOU LOVED THE SERVICE\n\n");
                return 0;
        }
        default :
        {
                printf("YOU ENTERED A WRONG CHOICE\n\n");
                return 0;
        }
        }
}
}
