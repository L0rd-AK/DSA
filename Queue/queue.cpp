#include <bits/stdc++.h>
using namespace std;
int MAX = 10, rear = 0, front = 0;
int Queue[10];
void show()
{
    for (int i = front; i < rear; i++)
        cout << Queue[i] << " ";
}
void enqueue(int data)
{
    if (rear == MAX)
    {
        printf("Queue is full!\n");
        return;
    }
    Queue[rear] = data;
    rear++;
    printf("%d is enqueue!\n", data);
}

int dequeue()
{
    int temp;
    if (front == rear)
    {
        printf("Queue is empty!\n");
        return -1;
    }
    int data = Queue[front];
    front++;
    return data;
}

int main()
{
    enqueue(5);
    enqueue(4);
    dequeue();
    enqueue(8);
    enqueue(1);
    enqueue(3);
    dequeue();
    show();
}