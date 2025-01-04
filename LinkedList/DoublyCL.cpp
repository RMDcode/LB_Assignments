#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE; 

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

    DoublyCL()
    {
        head = NULL;
        tail = NULL;
        iCount = 0;
    }

    void InsertFirst(int no) {
        PNODE newn = new Node(no);

        if (head == NULL && tail == NULL) 
        {
            head = newn;
            tail = newn;
        } 
        else
        {
            newn->next = head;
            head->prev = newn;
            head = newn;
        }

        tail->next = head;
        head->prev = tail;
    }

    void InsertLast(int no) {
        PNODE newn = new Node(no);

        if (head == NULL && tail == NULL) 
        {
            head = newn;
            tail = newn;
        } 
        else 
        {
            tail->next = newn;
            newn->prev = tail;
            tail = newn;
        }

        tail->next = head;
        head->prev = tail;
    }

    void DeleteFirst() 
    {
        if (head == NULL && tail == NULL) 
        {
            return;
        } 
        else if (head == tail) 
        {
            delete head;
            head = NULL;
            tail = NULL;
        } 
        else 
        {
            PNODE temp = head;
            head = head->next;
            delete temp;
            tail->next = head;
            head->prev = tail;
        }
    }

    void DeleteLast() 
    {
        if (head == NULL && tail == NULL) 
        {
            return;
        } 
        else if (head == tail) 
        {
            delete head;
            head = NULL;
            tail = NULL;
        } 
        else 
        {
            PNODE temp = tail;
            tail = tail->prev;
            delete temp;
            tail->next = head;
            head->prev = tail;
        }
    }

    void Display() {
        if (head == NULL && tail == NULL) 
        {
            cout << "LinkedList is empty" << endl;
            return;
        }

        PNODE temp = head;
        do {
            cout << "| " << temp->data << " | <=> ";
            temp = temp->next;
            } while (temp != head);

        cout << endl;
    }

    int Count() {return iCount;}

    void InsertAtPos(int no, int iPos) 
    {
        int iCount = Count();

        if (iPos < 1 || iPos > iCount + 1) 
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (iPos == 1) 
        {
            InsertFirst(no);
        }
        else if (iPos == iCount + 1) 
        {
            InsertLast(no);
        } else 
        {
            PNODE newn = new Node(no);
            PNODE temp = head;

            for (int i = 1; i < iPos - 1; i++) 
            {
                temp = temp->next;
            }

            newn->next = temp->next;
            temp->next->prev = newn;
            temp->next = newn;
            newn->prev = temp;
        }
    }

    void DeleteAtPos(int iPos) 
    {
        int iCount = Count();

        if (iPos < 1 || iPos > iCount) 
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (iPos == 1) 
        {
            DeleteFirst();
        } else if (iPos == iCount) 
        {
            DeleteLast();
        } else 
        {
            PNODE temp = head;

            for (int i = 1; i < iPos - 1; i++) 
            {
                temp = temp->next;
            }

            PNODE target = temp->next;
            temp->next = target->next;
            target->next->prev = temp;
            delete target;
        }
    }

};

int main()
{
    DoublyCL dObj;

    dObj.InsertFirst(51);
    dObj.InsertFirst(21);
    dObj.InsertFirst(11);
    dObj.Display();
    cout << "Number of elements: " << dObj.Count() << endl;

    dObj.InsertLast(101);
    dObj.InsertLast(111);
    dObj.InsertLast(121);
    dObj.Display();
    cout << "Number of elements: " << dObj.Count() << endl;

    dObj.DeleteFirst();
    dObj.Display();
    cout << "Number of elements: " << dObj.Count() << endl;

    dObj.DeleteLast();
    dObj.Display();
    cout << "Number of elements: " << dObj.Count() << endl;

    dObj.InsertAtPos(41, 3);
    dObj.Display();
    cout << "Number of elements: " << dObj.Count() << endl;

    dObj.DeleteAtPos(3);
    dObj.Display();
    cout << "Number of elements: " << dObj.Count() << endl;


    return 0;
}