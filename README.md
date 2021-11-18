## Doubly Linked List - DDL
In computer science, a doubly linked list is a linked data structure that consists of a set of sequentially linked records called nodes. Each node contains three fields: two link fields (references to the previous and to the next node in the sequence of nodes) and one data field. The beginning and ending nodes' previous and next links, respectively, point to some kind of terminator, typically a sentinel node or null, to facilitate traversal of the list. If there is only one sentinel node, then the list is circularly linked via the sentinel node. It can be conceptualized as two singly linked lists formed from the same data items, but in opposite sequential orders. The two node links allow traversal of the list in either direction. While adding or removing a node in a doubly linked list requires changing more links than the same operations on a singly linked list, the operations are simpler and potentially more efficient (for nodes other than first nodes) because there is no need to keep track of the previous node during traversal or no need to traverse the list to find the previous node, so that its link can be modified.

![]()

## My implementation in C language

```C
  /* Node of a doubly linked list */
typedef struct node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

/*Head: Get the fist node from list.
 *Tail: Get the last node from list.
 */
Node *head = NULL;
Node *tail = NULL;
```

### The supported functions are:

**push**: Given a reference (pointer to pointer) to the head of a list
   and a data, inserts a new node on the front of the list.

**insertAfter**: Given a node as prev_node, insert a new node after the given node.

**append**: iven a reference (pointer to pointer) to the head
   of a DLL and an int, appends a new node at the end
   
**delete**: Function to delete a node in a Doubly Linked List.

**printList**: This function prints contents of linked list starting from the given node.
