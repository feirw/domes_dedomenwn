# Question
• Do we need element Count in the struct
PriorityQueue and constant MAXCOUNT
in the PQTypes.h file?


# Answer
• We could avoid the use of Count by using NULL
as the value of member ItemList of structure
PriorityQueue for empty queues.

• But checking that Count==MAXCOUNT is useful
for knowing whether the priority queue is full,
and we cannot get this in any other way.

• Count can also tell us how many elements we
have in the priority queue without having to
search.

# Εxercise 

Revisit the ADT priority queue and define a
better interface and its implementation so
that we have information hiding.
Data Structures and Programming