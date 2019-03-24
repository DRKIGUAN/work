void oneway_print(struct LinkList*head)
{  struct LinkList*p=head->next;
   while(p->next!=NULL)
   {printf("%d\n",p->data);
   p=p->next;
   }
}
