#include <cstdio>
#include <cstdlib>

#include "Node.h"
#include "List.cpp"
#include "Collector.h"

int main()
{
    //demo
    Collector collector;
    List list;
    printf("Ambas listas están vacías:\n");
    list.printList();
    collector.printList();
    printf("\nLuego agregamos nodos a List:\n");
    list.insert(13);
    list.insert(42);
    list.insert(69);
    list.insert(128);
    list.printList();
    printf("\nLuego borramos algunos nodos de List:\n");
    list.deleteNode(42);
    list.deleteNode(69);
    list.printList();
    collector.printList();
    printf("\nLuego insertamos algunos nodos diferentes en List:\n");
    list.insert(64);
    list.insert(666);
    list.printList();
    collector.printList();
    collector.freeCollector();
    return 0;
}