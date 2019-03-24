#include<stdio.h>
#include<stdlib.h>
#include"define.h"
#include "oneway_creat.c"
#include "one_way middlepoint.c"
#include "oneway_delete.c"
#include "oneway_free.c"
#include "oneway_insert.c"
#include "oneway_print.c"
#include "oneway_search.c"
#include "oneway-reverse.c"

struct LinkList*Search_Middle_Point(struct LinkList*head);
void reverse_even(struct LinkList*head);
struct LinkList *Creat_LinkList();
void Delete_LinkList(struct LinkList*target,struct LinkList*head);
void Free_LinkList(struct LinkList*head);
void Insert_LinkList(struct LinkList*target);
struct LinkList*Search_Node(int x,struct LinkList*head);
int main()
{ struct LinkList*head,*target;
  int flag=1,e;
  printf("Please create a LinkList first\n");
  head=Creat_LinkList();
  char exam;//变量exam用于开启并检查后续操作
  while(flag)
  {printf("What do you want to do?\n");
  printf("IF you want to delete a node of a one-way LinkList,please enter d\n");
  printf("IF you want to free a one-way LinkList,please enter f\n");
  printf("IF you want to reverse the even node of one-way LinkList,please enter r\n");
  printf("If you want to insert a node,please enter i\n");
  printf("If you want to search a node,please enter s\n");
  printf("If you want to search the middle point,please enter m\n");
  printf("If you want to print the List, please enter p\n");
  printf("If you want to do nothing,please enter n\n");
  exam=getchar();
  if(exam!='d'&&exam!='f'&&exam!='r'&&exam!='n'&&exam!='i'&&exam!='s'&&exam!='m'&&exam!='p'){printf("error");break;}
  if(exam=='d'){printf("Please enter a number you want to delete first\n");
    scanf("%d",&e);
    target=Search_Node(e,head);
    if(target!=NULL)Delete_LinkList(target,head);}
  if(exam=='f'){Free_LinkList(head);}
  if(exam=='r'){reverse_even(head);}
  if(exam=='i'){printf("You want to insert a number after which number?");scanf("%d",&e);target=Search_Node(e,head);Insert_LinkList(target);}
  if(exam=='s'){printf("enter the number you want to search for");scanf("%d",&e);target=Search_Node(e,head);}
  if(exam=='m'){target=Search_Middle_Point(head);printf("%d\n",target->data);}
  if(exam=='n'){flag=0;}
  if(exam=='p')oneway_print(head);
  exam='c';
  }
  return 0;
}


