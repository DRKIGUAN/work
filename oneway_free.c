void Free_LinkList(struct LinkList*head)
{  struct LinkList*p=head->next;
   while(p!=NULL)
   { free(head);
     head=p;
     p=p->next;
   }
   free(head);
}
