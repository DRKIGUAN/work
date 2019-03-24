void Delete_Double_List(struct DLinkList*target)
{
    struct DLinkList*before=target->prior,*after=target->next;
    before->next=after;
    after->prior=before;
}
