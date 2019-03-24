void reverse_even(struct LinkList*head)
{struct LinkList*prior=head,*middle=prior->next,*latter=middle->next;
 while(latter!=NULL&&latter->next!=NULL)
 {middle->next=prior;
  prior=latter;
  middle=latter->next;
  latter=middle->next;
 }
 middle->next=prior;
}
