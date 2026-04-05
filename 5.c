#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue() {
    int value;

    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert\n");
        return;
    }

    printf("Enter the value to insert : ");
    scanf("%d", &value);

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;
    printf("%d inserted successfully\n", value);
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to delete\n");
    } else {
        printf("%d deleted successfully\n", queue[front]);
        front++;
    }
}

// Peek operation
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element is %d\n", queue[front]);
    }
}

// Display operation
void display() {
    int i;

    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue Elements are:\n");
        for (i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

// Main function
int main() {
    int choice;

    do {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}