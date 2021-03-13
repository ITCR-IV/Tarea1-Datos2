#include "Node.h"
#include "Collector.h"
#include <cstdio>
#include <cstdlib>

Node::Node(int val)
{
    value = val;
    next = nullptr;
}

void *Node::operator new(size_t size)
{
    void *ptr;
    if (Collector::isEmpty())
    {
        ptr = malloc(size);
    }
    else
    {
        ptr = Collector::recycleNode();
    }
    return ptr;
}

void Node::operator delete(void *ptr)
{
    Node *nodePtr = static_cast<Node *>(ptr);
    Collector::insert(nodePtr);
}

int Node::getValue()
{
    return value;
}

void Node::setValue(int newVal)
{
    value = newVal;
}

Node *Node::getNext()
{
    return next;
}

void Node::setNext(Node *newNext)
{
    next = newNext;
}