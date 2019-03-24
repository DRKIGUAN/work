void Delete_LinkList(struct LinkList*target,struct LinkList*head)
{
  struct LinkList*previous=head;
  while(previous->next!=target)
    previous=previous->next;
  previous->next=target->next;
}
