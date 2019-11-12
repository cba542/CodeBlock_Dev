#include "main.h"

struct Node{
  int val;
  struct Node *next;
};

void Reverse(struct Node *head)
{
    struct ListNode *pre = NULL;
    struct ListNode *nex = NULL;


    while(1)
    {
      if(head->next == NULL)
      {
        head->next = pre;
        Print(head);
        break;
      }

        nex = head->next;
        head->next = pre;
        pre = head;
        head = nex;


    }


}

void Print(struct Node *head)
{
    while(head->next != NULL)
    {
        printf("%d->",head->val);
        head = head->next;

    }

  printf("%d",head->val);
  printf("\n");
}

void Push(struct Node **head,int x)
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->next = *head;
  temp->val = x;
  *head = temp;
}

int main()
{
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->val = 1;
  head->next = NULL;

  Push(&head, 3);
  Push(&head, 5);
  Push(&head, 7);
  Print(head);
  Reverse(head);
  //Print(head);
}
