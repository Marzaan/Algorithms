#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void print()
 {
     struct node *temp=head;
     while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
     }
 }
 int main ()
{
     int x,n,i;
     head=NULL;
     struct node *temp1=head;
     printf("How many number\n");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        printf("Enter the number\n");
        scanf("%d",&x);
     }
     node *temp=new node();
     temp->data=x;
     temp->next=NULL;
     for(i=0;i<n-1;i++){
        scanf("%d",&x);
        node *temp=new node();
        temp->data=x;
        temp->next=NULL;
        temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
     }
     print();
}
