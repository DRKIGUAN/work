void Insert_LinkList(struct LinkList*target)
{   struct LinkList*p;int x;
    printf("The number you want to insert\n");
    scanf("%d",&x);
    p=(struct LinkList*)malloc(sizeof(struct LinkList));
    p->data=x;
    p->next=target->next;
    target->next=p;
}
