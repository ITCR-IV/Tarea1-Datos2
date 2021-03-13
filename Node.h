#ifndef NODE_H
#define NODE_H

#include <cstdlib>

class Collector;

class Node
{
    private:
        int value;
        Node *next;

    public:

        Node(int val);

        void *operator new(size_t size);

        void operator delete(void *ptr);

        int getValue();

        void setValue(int newVal);

        Node *getNext();

        void setNext(Node *newNext);
};

#endif