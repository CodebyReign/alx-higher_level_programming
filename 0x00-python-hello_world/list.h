#ifndef LISTS_H
#define LISTS_H


#include <stdlib.h>



/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 *
 *
 */

typedef struct listint_s

{
<<<<<<< HEAD
int n;
struct listint_s *next;
}
listint_t;
=======
	int n;
	struct listint_s *next;

} listint_t;


>>>>>>> 21ddd941163542dee06e413253c39dbf71476bf1
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);


#endif /* LISTS_H */
