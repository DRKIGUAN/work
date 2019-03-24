struct DLinkList*Search_Node(int x,struct DLinkList*head)
{  struct DLinkList*p=head->next;
   while(p!=NULL)
    {if(p->data==x)break;
     p=p->next;
    }
    return p;
}
