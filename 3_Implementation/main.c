#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct passenger //passenger details
{
    char name[20];
    int age;
    char stop[2];
}pass;
pass p[10];

int addpass(int x, int y) //adding passengers
{
    int i=x;
    for(i;i<y;i++)
   {
       printf("\n_PASSENGER NUMBER:%d_\n",i+1);
       printf("\n enter name\n");
        scanf("%s",p[i].name);
       printf("\n  enter age\n");
        scanf("%d",&p[i].age);
        printf("\n  enter stop \n ");
        scanf("%s",p[i].stop);
        printf("\n");
   }
   return i; 
}


int startpod(int x) //startpod function
{
    if(x==0)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
    int loop,j,i,max;
    printf("\n Maximum startpod no.s %d \n",x);
    scanf("%d",&loop);
    for(j=1;j<=loop;j++)
    {
    i=0;
    max = p[i].age;
        for(i;i<x;i++)
        {
            if(p[i].age>max)
            {
                max = p[i].age;     //finding maximum age
            }
        }
    for(i=0;i<x;i++)
    {
        if(max == p[i].age)
        {
            printf("%s",p[i].name);
            printf("\n");
            break;
        }
    }
    for(i;i<x;i++)
    {
        p[i] = p[i+1];
    }
    --x;
    }
    }
    return x;
}

int printq(int x) //printing passengers queue 
{
    printf("\n----------------------------\n");
    printf("\n_PASSENGERS IN QUEUE : %d_\n",x);
    
    if(x==0){
    printf("\nQueue is empty\n");}
    
    else
    {
        int i;
        for(i=0;i<x;i++)
        {
        printf("%s ",p[i].name);
        printf("%d ",p[i].age);
        printf("%s",p[i].stop);
        printf("\n");
        }
    }
   printf("\n--------------------------\n");
}

int main()
{

   int i,ch,x=0,y;
   while(1)
   {
       printf("\tEnter choice\n 1.ADD_PASSENGER\n 2.START_POD\n 3.PRINT_Q\n 4.EXIT\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
                printf("\nEnter no.of. passengers\n");
                scanf("%d",&y);
                x = addpass(x,x+y);
                break;
                
            case 2:
                x = startpod(x);
                break;
                
            case 3:
                printq(x);
                break;
                
            case 4:
                exit(0);
                
            default:
                printf("Invalid");
       }
   }

}