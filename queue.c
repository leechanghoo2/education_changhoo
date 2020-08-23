#include<stdio.h>
#define MAX 100
int queue[MAX];

int front = -1;
int rear = -1;
int empty() {
	if (front==rear )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int full() {
	int temp = (rear + 1) % MAX;
	if (temp == front) {
		return 1;
	}
	else
	{
		return 0;
	}
}
void addq(int value) {
	if (full())
		printf("Queue is full.\n");
	else {
		rear = (rear + 1) % MAX;
		queue[rear] = value;
	}
}
int dequeue() {
	if (empty())
		printf("Queue is empty.\n");
	else {
		front = (front + 1);
		return queue[front];
	}
}

int main() {
	addq(4);
	addq(5);
	printf("%d\n",dequeue());//c에서는 꼭 %d로 출력해야함
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	return 0;
}