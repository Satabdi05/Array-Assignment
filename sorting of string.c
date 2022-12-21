#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
    int i,j,n;
    char ch[20][30], temp[30];

    printf("Enter the no of Item : ");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
        gets(ch[i]);
        //printf("\n\n");
        printf("\nEntered the Items are :");
           for(i=0;i<=n;i++)
            printf("\n %s", ch[i]);

     // //sorting
        for(i=0; i<=n; i++)
        {
            for(j=i+1;j<=n;j++)   //when i=0, j= i+1=1
            {
                if(strcmp(ch[i],ch[j])>0)
                {
                    strcpy(temp,ch[i]);
                    strcpy(ch[i],ch[j]);
                    strcpy(ch[j],temp);
                }
            }
        }

        //printf("\n");
        printf("\n Sorted strings are :");
        for(i=0; i<=n;i++)
             printf("\n %s", ch[i]);
        getch();
}
