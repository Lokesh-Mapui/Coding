#include <stdio.h>
#define MAX 50

int stack[MAX], n, top = -1;

void push();
void pop();
void display();
void peek();

int main() {
    int choice = 0;

    printf("Enter the number of elements in the stack: ");
    scanf("%d", &n);

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                return 0;
            default:
                printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}

void push() {
    int val;
    if (top == n - 1) {
        printf("\nStack Overflow");
    } else {
        printf("\nEnter the value you want to push: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow");
    } else {
        int del = stack[top];
        top = top - 1;
        printf("%d deleted successfully\n", del);
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nStack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peek() {
    if (top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nTop element is: %d", stack[top]);
    }
}
