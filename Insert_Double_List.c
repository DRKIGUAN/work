void Insert_Double_List(struct DLinkList*target)
{   int x;
    printf("enter the number you want to insert\n");
    scanf("%d",&x);
    struct DLinkList*new=(struct DLinkList*)malloc(sizeof(struct DLinkList)),*after=target->next;//after为target后面的节点 
    new->data=x;
    new->next=target->next;
    new->prior=target;
    target->next=new;
    after->prior=new;
}
