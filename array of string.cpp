#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    FILE *ptr,*ptr2;
    ptr=fopen("demo1.txt","a");
    char n[25][5],n1[25][10];

    for(int i=0;i<5;i++)
    {

        scanf("%s",&n[i]);
        //fprintf(ptr,"%s",n[i]);
    }

    for(int i=0;i<5;i++)
    {

        //scanf("%s",&n[i]);
        fprintf(ptr,"%s ",n[i]);
    }

    fclose(ptr);

    ptr2=fopen("demo1.txt","r");

    for(int i=0;i<10;i++)
    {

        fscanf(ptr2,"%s ",&n1[i]);
    }

    for(int i=0;i<10;i++)
    {

        printf("%s\n",n1[i]);
    }
}
