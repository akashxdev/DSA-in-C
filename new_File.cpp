#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *addnode(int k, struct node *pre)
{
    struct node *newone;
    newone=(struct node*)malloc(sizeof(struct node));
    newone->value=k;
    newone->next=NULL;
    pre->next=newone;
    return newone;
}
void printlist(struct node *k)
{
    while(k!=NULL)
    {
        printf("\n %d",k->value);
        k=k->next;
    }
}
int main(void)
{
    int i,m;
    struct node *one;
    struct node *last;
    one=(struct node*)malloc(sizeof(struct node));
    one->value=36;
    one->next=NULL;
    last=addnode(29,one);
    for(i=0;i<10;i++)
    {
        printf("enter value");
        scanf("%d",&m);
        last=addnode(m,last);
    }
    printlist(one);
}