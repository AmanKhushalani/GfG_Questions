 // Quesiton link :- https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&page=1&query=category[]Linked%20Listpage1category[]Linked%20List

// dificulty = Easy

//solution = 

// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
void display(struct Node *head);
//struct Node *start;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      printf("%d",getCount(start));
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
// } Driver Code Ends


//User function Template for C

int getCount(struct Node* head)
    {
        struct Node *temp = head;
        int count = 1;
        while(temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
