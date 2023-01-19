#include <stdio.h>
void main()
{
    int a[]={27,12,3,7,31,41,33,36,11,17};
    int m,i;
    printf("Enter the value to search\n");
    scanf("%d",&m);
    for(i=0;i<10;i++);
    {
        if(a[i]==m)
        {
            printf("\nvalue in position %d",i);
           
        }
        
    }
}