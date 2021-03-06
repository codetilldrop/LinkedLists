/*
-------DO NOT EDIT THIS FILE-------
*/

// a concrete linked list
// list is a pointer to a struct - containing the head ptr
 
typedef struct _node *link;    // a link points at a node
 
typedef struct _node {
    int value;
	link next;
} node;
 
// a list is represented by a pointer to a struct which contains 
// a pointer to the first node of the list called the "head"
typedef struct _list {
    link head;
} *list;     
 
 
 
// print out a list
void showList (list listToPrint);
 
// inset item at the front of the list
void frontInsert (list l, int item);
 
// count the number of items in the list
int numItems (list l);
 
// insert at end of list
void append (list l, int value);
 
// find the value stored at position i
// i MUST be a valid position in the list
// dont call this on positions outside the list
int lookup (list l, int position);

// create an empty list
list newList (void);

// delete the first node
void deleteHead (list l);

// delete the end node
void deleteLast (list l);

// join two lists

// move all the elements from the second list to the end of
// the first list (in order).  this leaves the second list
// empty and all the elements in the first list. 
void concatenate (list to, list from);