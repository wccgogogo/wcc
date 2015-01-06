#include<stdio.h>
#include<string.h>
void fun(char str1[][10],char str2[][10])
{
   int i,j;
   for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
          {
            if(strcmp(str1[i],str2[j])=0)
              {
                str1[i]='';
              }
          }
        
    }
   strcat(str1,str2);      




}
int main()
{
    char s1[6][10]={"while","for","swich","if","continue","go"};    
    char s2[5][10]={"hello","you","for","if","while"};
    fun(s1,s2);
    printf("%s",s1);


}
