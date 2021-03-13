#include "Node.h"
#include <cstdio>
#include <cstdlib>

class List
{
private:
    Node *head = nullptr;

    void setHead(Node *newHead)
    {
        head = newHead;
    }

public:
    Node *getHead()
    {
        return head;
    }

    void insert(int val)
    {
        Node *newNode = new Node(val);
        newNode->setNext(head);
        head = newNode;
    }

    void deleteNode(int val)
    {
        Node *current = getHead();

        if (current == nullptr) //check empty list
        {
            printf("Wrong call to deleteNode, no nodes in the list\n");
            return;
        }

        if (current->getValue() == val) //check if it's the first one
        {
            Node *yeetNode = current;
            setHead(current->getNext());
            delete yeetNode;
            return;
        }

        while (current->getNext() != nullptr)
        {
            if (current->getNext()->getValue() == val) //current should reach the node previous to the node being delete
            {
                Node *yeetNode = current->getNext();
                current->setNext(yeetNode->getNext());
                delete yeetNode;
                return;
            }
            current = current->getNext();
        }
        //loop ending means nothing was found
        printf("Wrong call to deleteNode with value %d, value not in the list\n", val);
        return;
    }

    void printList()
    {
        printf("List:\n");
        Node *current = head;
        while (current != nullptr)
        {
            printf("Address: %p     Node: %d\n", current ,current->getValue());
            current = current->getNext();
        }
    }
};