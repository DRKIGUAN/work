struct LinkList*Search_Node(int x,struct LinkList*head)
{  struct LinkList*p=head;int num=1;//����num���� 
   p=p->next;
   while(p!=NULL)
   { if(p->data==x){
                   num++;break;
                   }
     p=p->next;
   }
   printf("The number is located in %d node\n",num);
   return p;
}
