
#define MAXCOUNT 10

typedef int PQItem;

typedef struct PQNodeTag {
    PQItem NodeItem;
    struct PQNodeTag *Link;
} PQListNode;

typedef struct {
    int Count;
    PQListNode *ItemList;
} PriorityQueue;

void Initialize (PriorityQueue *);
int Empty (PriorityQueue *);
int Full (PriorityQueue *);
void Insert (PQItem, PriorityQueue *);
PQItem Remove (PriorityQueue *);

typedef int PQItem;
typedef PQItem SortingArray[10];
SortingArray A;