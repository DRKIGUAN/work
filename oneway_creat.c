struct LinkList *Creat_LinkList()
{
  struct LinkList *head,*p;
  head=(struct LinkList*)malloc(sizeof(struct LinkList));
  head->next=NULL,head->data=0;
  p=(struct LinkList*)malloc(sizeof(struct LinkList));
  head->next=p;
  while(scanf("%d",&(p->data))!=EOF)p->next=malloc(sizeof(struct LinkList)),p=p->next;
  p->next=NULL;
  return head;
}
