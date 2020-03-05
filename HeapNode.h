#ifndef HEAPNODE_H_INCLUDED
#define HEAPNODE_H_INCLUDED

#include <cstdio>
class HeapNode {
    int key;
public:
    HeapNode(int k=0) : key(k) {}
    void setKey(int k) {key = k; }
    int getKey() { return key; }
    void display() { printf("%4d", key);}
};

#endif // HEAPNODE_H_INCLUDED
