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
        PNODE iCount;
    public:
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void INsertLast(int);
        void InsertAtPos(int,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};


SinglyLL :: SinglyLL()
{
    printf("inside Constructor");
    first = NULL;
    iCount = 0;
}
void SinglyLL :: InsertFirst(int no)
{

}
void SinglyLL :: INsertLast(int no)
{

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


    return 0;
}