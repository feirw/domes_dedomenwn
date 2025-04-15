#include <stdio.h>
#include "PQTypes.h"

typedef PQItem SortingArray[MAXCOUNT];

void PriorityQueueSort(SortingArray A){
    int i;
    PriorityQueue PQ;
    Initialize(&PQ);
    for (i=0; i<MAXCOUNT; ++i){

        Insert(A[i], &PQ);
    } 
    printf("The queue contains %d elements\n",PQ.Count);
    for (i=MAXCOUNT-1; i>=0; --i) {
        A[i]=Remove(&PQ);
    }
}
