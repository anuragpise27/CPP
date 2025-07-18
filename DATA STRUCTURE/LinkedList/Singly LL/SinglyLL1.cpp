#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;

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
int SinglyLL :: Count()
{
    PNODE temp = NULL;
    int iCount = 0;
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

}
void SinglyLL :: DeleteFirst()
{
    
}
void SinglyLL :: DeleteLast()
{

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

    obj.InsertLast(10);
    obj.Display();
    iRet = obj.Count();
    cout<<"total node :\n"<<iRet;


    return 0;
}