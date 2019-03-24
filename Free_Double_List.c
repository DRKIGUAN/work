void Free_Double_List(struct DLinkList*head)
{
    struct DLinkList*before=head,*after=head->next;
    while(after->next!=NULL)
        {free(before);
         before=after;
         after=after->next;
        }
        free(before);
}
