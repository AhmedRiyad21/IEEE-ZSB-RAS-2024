// P.1
#include <stdio.h>

#define mysizeof(type) ((char *)(&type + 1) - (char *)(&type))

int main() {
    int x;
    printf("Size of int using mysizeof macro: %zu\n", mysizeof(x));

    double y;
    printf("Size of double using mysizeof macro: %zu\n", mysizeof(y));

    return 0;
}

#include <stdio.h>

int main() {
    int x;
    printf("Size of int using sizeof: %zu\n", sizeof(x));

    double y;
    printf("Size of double using sizeof: %zu\n", sizeof(y));

    return 0;
}

// P.2
#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node* next;
};

void insertNode(struct Node** head, int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;

if (*head == NULL) {
*head = newNode;
} else {
struct Node* temp = *head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
}

void deleteNode(struct Node** head) {
if (*head == NULL) {
printf("List is empty. Cannot delete.\n");
return;
}

struct Node* temp = *head;
*head = (*head)->next;
free(temp);
}

void printList(struct Node* head) {
if (head == NULL) {
printf("List is empty.\n");
return;
}

printf("Linked List: ");
while (head != NULL) {
printf("%d ", head->data);
head = head->next;
}
printf("\n");
}

int main() {
struct Node* head = NULL;
char userInput;

while (1) {
printf("Enter a command (+ to add, - to delete, P to print, X to exit): ");
scanf(" %c", &userInput);

if (userInput == '+') {
int data;
printf("Enter the data to add: ");
scanf("%d", &data);
insertNode(&head, data);
} else if (userInput == '-') {
deleteNode(&head);
} else if (userInput == 'P') {
printList(head);
} else if (userInput == 'X') {
break;
} else {
printf("Invalid command. Try again.\n");
}
}

return 0;
}
