struct DLinkList*Create_Double_List()
{ struct DLinkList*head,*before,*after=NULL;int x;
  head=(struct DLinkList*)malloc(sizeof(struct DLinkList));
  before=head;
  before->next=NULL,before->data=0,before->prior=NULL;
  
  while(scanf("%d",&x)!=EOF)
  {   after=(struct DLinkList*)malloc(sizeof(struct DLinkList));
      after->data=x;
      after->prior=before;
      before->next=after;
      before=after;
  }
   after->next=NULL;
   return head;
}
