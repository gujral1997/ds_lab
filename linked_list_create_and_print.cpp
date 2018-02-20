#include <iostream>
using namespace std;
struct node
{
   int data;
   struct node *next;
};

int main()
{
   int n;
   cout<<"enter the length of linked list"<<endl;
   cin>>n;
   struct node *p,*start=NULL,*last=NULL;
   for(int i=1;i<=n;i++)
   {
     p=(struct node*)malloc(sizeof(struct node));
     cout<<"enter the data";
     cin>>p->data;
     p->next=NULL;
     if(i==1)
     {
       start=last=p;
       
     }
     else
     {
        last->next=p;
        last=p;
     }
   }
   cout<<"the following data is";
   p=start;
   while(p!=NULL)
   {
   cout<<p->data<<endl;
   p=p->next;
   }
   
   return 0;
 }