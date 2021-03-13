#include "Collector.h"
#include "Node.h"
#include <cstdio>
#include <cstdlib>

Node* Collector::head;

Collector::Collector()
{
    head = nullptr;
}

Node *Collector::getHead()
{
    return head;
}

bool Collector::isEmpty()
{
    if (getHead() == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Collector::insert(Node *recycledNode)
{
    recycledNode->setNext(head);
    head = recycledNode;
}

Node *Collector::recycleNode()
{
    Node *toBeRecycled = head;
    head = head->getNext();
    return toBeRecycled;
}

void Collector::printList()
{
    printf("Collector:\n");
    Node *current = head;
    while (current != nullptr)
    {
        printf("Address: %p     Node: %d\n", current ,current->getValue());
        current = current->getNext();
    }
}

void Collector::freeCollector()
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *yeetNode = current;
        current = current->getNext();
        free(yeetNode); //Node's new allocates memory with malloc so this should be safe
    }
}