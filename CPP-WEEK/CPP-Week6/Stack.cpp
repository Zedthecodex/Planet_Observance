#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T value;
    Node *next;

    Node(T value)
    {
        this->value = value;
    }
};

template <typename T>
class Stack
{
private:
    int size_;
    Node<T> *top_ = NULL;
    Node<T> *itr_ = NULL;

public:
    Stack()
    {
        this->size_ = 0;
    }

    void push(T value)
    {
        if (this->top_ == NULL)
        {
            this->top_ = new Node<T>(value);
        }
        else
        {
            Node<T> *tmp = new Node<T>(value);
            tmp->next = this->top_;
            this->top_ = tmp;
        }
        this->size_ += 1;
    }

    Node<T> *pop()
    {
        Node<T> *tmp = this->top_;

        this->top_ = this->top_->next;
        this->size_ -= 1;
        return tmp;
    }

    Node<T> *peek()
    {
        return this->top_;
    }

    int size()
    {
        return this->size_;
    }

    Node<T> *iterate()
    {
        if (this->itr_ == NULL)
        {
            this->itr_ = this->top_;
        }
        else
        {
            this->itr_ = this->itr_->next;
        }
        return this->itr_;
    }

    T ptr()
    {
        return this->itr_->value;
    }

    void resetIterator()
    {
        this->itr_ = NULL;
    }
};
