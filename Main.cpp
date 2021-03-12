#include <cstdio>
#include "Node.cpp"
#include "List.cpp"
#include "Collector.cpp"


int main()
{
    List list;
    list.insert(55);
    list.insert(42);
    list.insert(64);
    list.printList();
    return 0;
}