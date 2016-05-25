//
// Created by zhuangxk on 5/17/16.
//


template <class T>
Stack<T>::Stack() : stack_top(Stack::BOTTOM) { }

template <class T>
Stack<T>::Stack(const Stack& s) : stack_top(s.stack_top) {
    for(int i = 0; i < s.stack_top; i++) {
        this->content[i] = s.content[i];
    }
}

template <class T>
Stack<T>::~Stack() {
    this->stack_top = Stack::BOTTOM;
}

template <class T>
Stack<T>& Stack<T>::operator=(const Stack& s) {
    if (this != &s) {
        this->stack_top = s.stack_top;
        for (int i = 0; i < s.stack_top; i++) {
            this->content[i] = s.content[i];
        }
    }
    return *this;
}

template <class T>
int Stack<T>::is_empty() {
    return this->stack_top == Stack::BOTTOM;
}

template <class T>
int Stack<T>::is_full() {
    return this->stack_top == Stack::SIZE;
}

template <class T>
void Stack<T>::push(T new_item) {
    this->content[this->stack_top++] = new_item;
}

template <class T>
T Stack<T>::pop() {
    return this->content[--this->stack_top];
}

template <class T>
T Stack<T>::top() {
    return this->content[this->stack_top - 1];
}

