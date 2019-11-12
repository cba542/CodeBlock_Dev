#include "main.h"

struct Node{
 int val;
 struct Node *Next;
};

void Remove(struct Node **head, int x)
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

  temp = *head;
  while(temp != NULL)
  {


    if(temp->val == x && temp->Next != NULL)
    {
      temp->val = temp->Next->val;
      temp->Next = temp->Next->Next;
      return;
    }

    if(temp->Next->val == x && temp->Next->Next == NULL)
    {

      temp->Next = NULL;
      return;
    }

    temp = temp->Next;
  }

}

void Reverse(struct Node **head)
{
  struct Node *pre = NULL;
  struct Node *cur = (*head);
  struct Node *nex = cur->Next;
  while(cur != NULL)
  {
    cur->Next = pre;
    pre =cur;
    cur = nex;
    if(cur != NULL)
        nex = cur->Next;


  }
  (*head) = pre;
}

void Push(struct Node **head, int x)
{
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp->val = x;
  temp->Next = (*head);

  (*head) = temp;

}

void PrintNode(struct Node *head)
{
  while(head != NULL)
  {
      printf("%d ",head->val);
      head = head->Next;
  }
  printf("\n");
}

int main()
{
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));

  head->val = 3;
  head->Next = NULL;
  Push(&head,5);
  Push(&head,7);
  Push(&head,9);
  PrintNode(head);
  Reverse(&head);
  PrintNode(head);
  Remove(&head,9);
  PrintNode(head);
  Remove(&head,5);
  PrintNode(head);

}

