 struct LinkList*Search_Middle_Point(struct LinkList*head)
{  int i=0,middle;
   struct LinkList*p=head;
   while(p)i++,p=p->next;
   if(i%2==0)return NULL;
   middle=i/2;
   p=head;
   for(i=0;i<middle;i++)
    p=p->next;
    return p;
}
