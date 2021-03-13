#ifndef COLLECTOR_H
#define COLLECTOR_H

class Node;

class Collector
{
private:
    static Node *head;

public:
    Collector();

    static Node *getHead();

    static bool isEmpty();

    static void insert(Node *recycledNode);

    static Node *recycleNode();

    void printList();

    static void freeCollector();
};

#endif