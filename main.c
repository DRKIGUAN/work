#include <stdio.h>
#include <stdlib.h>
#include"def.h"
#include"Create_Double_List.c"
#include"Delete_Double_List.c"
#include"Free_Double_List.c"
#include"Insert_Double_List.c"
#include"Search_Node.c"
#include"Print_Double_List.c"
int main()
{
    struct DLinkList*head,*target;
  int flag=1,e;
  printf("Please create a LinkList first\n");
  head=Create_Double_List();
  char exam;//变量exam用于开启并检查后续操作
  while(flag)
  {
  printf("What do you want to do?\n");
  printf("IF you want to delete a node of a double LinkList,please enter d\n");
  printf("IF you want to free a double LinkList,please enter f\n");
  printf("If you want to insert a node,please enter i\n");
  printf("If you want to search a node,please enter s\n");
  printf("If you want to print the List, please enter p\n");
  printf("If you want to do nothing,please enter n\n");
  exam=getchar();
  if(exam!='d'&&exam!='f'&&exam!='i'&&exam!='s'&&exam!='p'&&exam!='n'){printf("error");break;}
  if(exam=='d'){printf("Please enter a number you want to delete first\n");
    scanf("%d",&e);
    target=Search_Node(e,head);
    if(target!=NULL)Delete_Double_List(target);}
  if(exam=='f')free(head);
  if(exam=='i'){printf("Please enter a number you want to insert after it\n");scanf("%d",&e);target=Search_Node(e,head);Insert_Double_List(target);}
  if(exam=='s'){scanf("%d",&e);target=Search_Node(e,head);printf("%d\n",target->data);}
  if(exam=='p')Print_Double_List(head);
  if(exam=='n'){flag=0;}
  exam=getchar();
  }
  return 0;
}
