#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:
        PNODE first;
        PNODE iCount = 0;
    public:
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};


SinglyLL :: SinglyLL()
{
    printf("inside Constructor\n");
    first = NULL;
    iCount = 0;
}
void SinglyLL :: Display()
{
    PNODE temp = NULL;
    temp = first;
    while (temp != NULL)
    {
       cout<<"|"<<temp->data<<"|->";
       temp = temp ->next;
    }
    cout<<"NULL\n";
    
}
int  SinglyLL :: Count()
{
    int iCount = 0;
    PNODE temp = NULL;
    temp = first;
    while (temp != NULL)
    {
       iCount++;
       temp = temp ->next;
    }
  return iCount;
}
void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;

}
void SinglyLL :: InsertLast(int no)
{
     PNODE newn = NULL;
     PNODE temp = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
      temp = first;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = newn;
      newn = temp;
      
    }
    iCount++;

}
void SinglyLL :: InsertAtPos(int no,int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0;
    iCount = Count();
    if(pos < 1 || pos > iCount+1)
    {
        cout<<"invalid";
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        temp = first;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp ->next;
        }
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        newn->next = temp ->next;
        temp -> next = newn;
        
    }

}
void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;
    if(first->next == NULL)
    {
        free(first);
        first = NULL;
    }
    else
    {
        temp = first;
        first= first->next;
       free(temp);
    
    }
    iCount--;
}
void SinglyLL :: DeleteLast()
{
    PNODE temp = NULL;
    if(first->next == NULL)
    {
        free(first);
        first = NULL;
    }
    else
    {
        temp = first;
       while(temp ->next->next != NULL)
       {
        temp = temp ->next;
       }
       free(temp->next);
       temp->next = NULL;
    
    }
    iCount--;

}
void SinglyLL :: DeleteAtPos(int pos)
{

}

int main()
{
    SinglyLL obj;
    int iRet = 0;
    obj.InsertFirst(11);
    obj.InsertFirst(12);
    obj.InsertFirst(13);
    obj.InsertFirst(14);
    obj.InsertFirst(15);

    obj.Display();
    iRet = obj.Count();
    cout<<"total node :\n"<<iRet;

   /* obj.InsertLast(10);
    obj.Display();
    iRet = obj.Count();
    cout<<"total node :\n"<<iRet;

    obj.InsertAtPos(55,3);
    obj.Display();
    iRet = obj.Count();
    cout<<"total node :\n"<<iRet; 

    obj.DeleteFirst();
     obj.Display();
    iRet = obj.Count();
    cout<<"total node :\n"<<iRet;  */


    obj.DeleteLast();
     obj.Display();
    iRet = obj.Count();
    cout<<"total node :\n"<<iRet;



    return 0;
}