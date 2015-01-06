#include<stdio.h>
void fun(char str1[])
{
    int i,j;
    char c;
    for(i=0;i<9;i++)
       {
         for(j=0;j<9-i;j++)
            {
               if(str1[j]-str1[j+1]>0)
                 {
                    c=str1[j];
                    str1[j]=str1[j+1];
                    str1[j+1]=c;  
 
                 }
            }

      }

}
int main()
{ 
    char str2[20];
    scanf("%s",str2);
    fun(str2);
    printf("%s\n",str2);
    return 0;
}

