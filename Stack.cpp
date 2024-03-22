

#include "Stack.h"


template <class TYPE>
Stack<TYPE>::Stack(int s) {         // constructor
    maxSize = s;             // set array size
    stackArray = new TYPE[maxSize];  // create array
    top = -1;                // no items yet
}

//--------------------------------------------------------------
template <class TYPE>
Stack<TYPE>::~Stack() {         // destructor

    delete[] stackArray;

}

//--------------------------------------------------------------
template <class TYPE>
void Stack<TYPE>::push(TYPE j) {  // put item on top of stack
    stackArray[++top] = j;     // increment top, insert item
}

//--------------------------------------------------------------
template <class TYPE>
TYPE Stack<TYPE>::pop() {         // take item from top of stack
    return stackArray[top--];  // access item, decrement top
}

//--------------------------------------------------------------
template <class TYPE>
TYPE Stack<TYPE>::peek() {        // peek at top of stack
    return stackArray[top];
}

//--------------------------------------------------------------
template <class TYPE>
bool Stack<TYPE>::isEmpty() {    // true if stack is empty
    return (top == -1);
}

//--------------------------------------------------------------
template <class TYPE>
bool Stack<TYPE>::isFull() {     // true if stack is full
    return (top == maxSize - 1);
}

template <class TYPE>
TYPE Stack<TYPE>::gettop() {
    return stackArray[top];
}


