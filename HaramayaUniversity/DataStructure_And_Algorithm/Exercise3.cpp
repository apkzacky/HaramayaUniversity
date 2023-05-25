/*
Question is

Write a simple array implementation of queue data
structure ( including the operations 
1. enqueue
2. dequeue
3. isempty
4. isfull


*/


// 1.  C programming language implementation of the enqueue() function

int enqueue(int data)      
   if(isfull())
      return 0;

   rear = rear + 1;
   queue[rear] = data;

   return 1;


// 2. C programming language implementation of the dequeue() function 


int dequeue() {
   if(isempty())
      return 0;

   int data = queue[front];
   front = front + 1;

   return data;
}


// 3. C programming language implementation of the isempty() function −


bool isempty() {
   if(front < 0 || front > rear) 
      return true;
   else
      return false;
}


// 4. C programming language implementation of the isfull() function 


bool isfull() {
   if(rear == MAXSIZE - 1)
      return true;
   else
      return false;
}



