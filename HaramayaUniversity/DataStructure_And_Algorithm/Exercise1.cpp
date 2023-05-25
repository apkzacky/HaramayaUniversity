/*
THis is the question that i solved
Implementation of double linked linked lists in C++
i. insertion
ii. deletion
iii. searching
iv. sorting
*/

// Answers

// NB. the firs two question are the same but one is inserting first location and other is inserting last location.

//insert link at the first location
void insertFirst(int key, int data) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //update first prev link
      head->prev = link;
   }

   //point it to old first link
   link->next = head;
	
   //point first to new first link
   head = link;
}


//insert link at the last location
void insertLast(int key, int data) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //make link a new last link
      last->next = link;     
      
      //mark old last node as prev of new link
      link->prev = last;
   }

   //point last to new last node
   last = link;
}



//delete first item

struct node* deleteFirst() {

   //save reference to first link
   struct node *tempLink = head;
	
   //if only one link
   if(head->next == NULL) {
      last = NULL;
   } else {
      head->next->prev = NULL;
   }
	
   head = head->next;
	
   //return the deleted link
   return tempLink;



// searching


// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Structure of a node of
// the doubly linked list
struct Node {

	// Stores data value
	// of a node
	int data;

	// Stores pointer
	// to next node
	Node* next;

	// Stores pointer
	// to previous node
	Node* prev;
};

// Function to insert a node at the
// beginning of the Doubly Linked List
void push(Node** head_ref, int new_data)
{

	// Allocate memory for new node
	Node* new_node
		= (Node*)malloc(sizeof(struct Node));

	// Insert the data
	new_node->data = new_data;

	// Since node is added at the
	// beginning, prev is always NULL
	new_node->prev = NULL;

	// Link the old list to the new node
	new_node->next = (*head_ref);

	// If pointer to head is not NULL
	if ((*head_ref) != NULL) {

		// Change the prev of head
		// node to new node
		(*head_ref)->prev = new_node;
	}

	// Move the head to point to the new node
	(*head_ref) = new_node;
}

// Function to find the position of
// an integer in doubly linked list
int search(Node** head_ref, int x)
{

	// Stores head Node
	Node* temp = *head_ref;

	// Stores position of the integer
	// in the doubly linked list
	int pos = 0;

	// Traverse the doubly linked list
	while (temp->data != x
		&& temp->next != NULL) {

		// Update pos
		pos++;

		// Update temp
		temp = temp->next;
	}

	// If the integer not present
	// in the doubly linked list
	if (temp->data != x)
		return -1;

	// If the integer present in
	// the doubly linked list
	return (pos + 1);
}

// Driver Code
int main()
{
	Node* head = NULL;
	int X = 8;

	// Create the doubly linked list
	// 18 <-> 15 <-> 8 <-> 9 <-> 14
	push(&head, 14);
	push(&head, 9);
	push(&head, 8);
	push(&head, 15);
	push(&head, 18);

	cout << search(&head, X);

	return 0;
}



// sorting


#include <bits stdc++.h="">
 
using namespace std;

struct Node {
    int data;
    struct Node* prev, *next;
};

struct Node* getNode(int data)
{
    struct Node* newNode =
          (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}
 
// Function to insert in a sorted way
void sortedInsert(struct Node** head_ref, struct Node* newNode)
{
    struct Node* current;
 
    // if the list is empty
    if (*head_ref == NULL)
        *head_ref = newNode;
 
    // if the node is to be inserted at the start
    // of the sorted doubly linked list
    else if ((*head_ref)->data >= newNode->data) {
        newNode->next = *head_ref;
        newNode->next->prev = newNode;
        *head_ref = newNode;
    }
 
    else {
        current = *head_ref;
 
        // find the node after which the new node
        // is to be inserted
        while (current->next != NULL &&
               current->next->data < newNode->data)
            current = current->next;
 
        /*Make the appropriate links */
 
        newNode->next = current->next;
 
        // if the new node is not inserted at the
        // end of the sorted doubly linked list
        if (current->next != NULL)
            newNode->next->prev = newNode;
 
        current->next = newNode;
        newNode->prev = current;
    }
}
 
// Function to sort the doubly linked list
// using insertion sort
void insertionSort(struct Node** head_ref)
{
    // Initialize sorted doubly linked list with NULL
    struct Node* sorted = NULL;
 
    // Traverse through the given list
    struct Node* current = *head_ref;
    while (current != NULL) {
 
        // Store next for next iteration
        struct Node* next = current->next;
 
        // Rremovee all the links
        current->prev = current->next = NULL;
 
        // insert current in the 'sorted' doubly linked list
        sortedInsert(&sorted, current);
 
        // Update current
        current = next;
    }
 
    // Update the head
    *head_ref = sorted;
}

void printList(struct Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
         (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

int main()
{
    struct Node* head = NULL;
    push(&head, 2);
    push(&head, 1);
    push(&head, 3);
    cout << "Doubly Linked List Before Sorting \n";
    printList(head);
    insertionSort(&head);
    cout << "\n Doubly Linked List After Sorting \n";
    printList(head);
 
    return 0;
}
</bits>