/****************************************************************
* File      :   Stack.h
* Version   :   1.0
* Author    :   Madjid Allili (mallili@ubishops.ca)
* Subject   :   Templated Stack using dynamic array
 *****************************************************************/

#ifndef _Stack_h
#define _Stack_h

template <class TYPE>
class Stack {         // Dynamic array
private:
    int maxSize;        // size of stack array
    TYPE* stackArray;
    int top;            // top of stack
    //--------------------------------------------------------------
public:
    Stack(int s);
    ~Stack();
    void push(TYPE j);
    TYPE pop();
    TYPE peek();
    bool isEmpty();
    bool isFull();
    TYPE gettop(); 
    void reverseStack(Stack<int>& s);
};

#endif  
#pragma once
