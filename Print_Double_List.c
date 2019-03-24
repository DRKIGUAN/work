void Print_Double_List(struct DLinkList*head)
{
    struct DLinkList*p=head->next;
   while(p->next!=NULL)
   {printf("%d\n",p->data);
   p=p->next;
   }
}


