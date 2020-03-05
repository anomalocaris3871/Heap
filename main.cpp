#include "MaxHeap.h"
#include <cstdlib>

void heapSort(int *a, int n) {
    MaxHeap h;
    for(int i=0; i<n; ++i)
        h.insert(a[i]);
    for(int i = n-1; i>=0; --i)
        a[i] = h.remove().getKey();
}

int main(void)
{
    MaxHeap heap;

    heap.insert(10);
    heap.insert(5);
    heap.insert(30);
    heap.insert(8);
    heap.insert(9);
    heap.insert(7);
    heap.insert(3);

    heap.display();

    heap.remove();
    heap.display();

    heap.remove();
    heap.display();
    printf("\n");

    MaxHeap heap2;
    int data[10];

    for(int i=0;i<10;++i)
        data[i] = rand() % 100;
    printf("\nBefore sort : ");

    for(int i=0;i<10;++i)
        printf("%3d", data[i]);

    heapSort(data,10);

    printf("\n After sort : ");
    for(int i=0;i<10;++i)
        printf("%3d", data[i]);
    printf("\n");
}
