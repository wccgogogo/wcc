#include<stdio.h>
struct student
{
 long num;
 float score;
 struct student * next;
};
int main()
{
 struct student a,b,c,*head,*p;
 a.num=10000;a.score=88.5;
 b.num=10001;b.score=89;
 c.num=10002;c.score=90;
 head=&a;
 a.next=&b;
 b.next=&c;
 c.next=NULL;
 p=head;
 while(p!=NULL)
 {
  printf("%ld%5.1f\n",p->num,p->score);
  p=p->next;
 }
 return 0;
}
