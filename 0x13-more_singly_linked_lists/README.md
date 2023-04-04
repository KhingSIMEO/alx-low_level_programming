0x13. C - More singly linked lists
C
Algorithm
Data structure

This project, is the continued practice building and using singly linked lists in C.

links.h: Header file containing definitions and prototypes for all types and functions written for the project.

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

Task
0. Print list
mandatory
Write a function that prints all the elements of a listint_t list.
1. List length
mandatory
Write a function that returns the number of elements in a linked listint_t list.
2. Add node
mandatory
Write a function that adds a new node at the beginning of a listint_t list.
3. Add node at the end
mandatory
Write a function that adds a new node at the end of a listint_t list.
4. Free list
mandatory
Write a function that frees a listint_t list.
5. Free
mandatory
Write a function that frees a listint_t list.
6. Pop
mandatory
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
7. Get node at index
mandatory
Write a function that returns the nth node of a listint_t linked list.
8. Sum list
mandatory
Write a function that returns the sum of all the data (n) of a listint_t linked list.
9. Insert
mandatory
Write a function that inserts a new node at a given position.
10. Delete at index
mandatory
Write a function that deletes the node at index index of a listint_t linked list.
11. Reverse list
#advanced
Write a function that reverses a listint_t linked list.
12. Print (safe version)
#advanced
Write a function that prints a listint_t linked list.
13. Free (safe version)
#advanced
Write a function that frees a listint_t list.
14. Find the loop
#advanced
Write a function that finds the loop in a linked list.
