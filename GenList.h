#include<iostream>
#include "ListNode.h"

using namespace std;

template<class T>

class GenList
{
private:
  ListNode<T> *front;
  unsigned int size;
  ListNode<T> *back;

public:

  GenList()
  {
    front = NULL;
    back = NULL;
    size = 0;
  }

  ~GenList()
  {
    //iterate and delete each node and pointer
    if(front != NULL)
    {
      delete front;
    }
  }

  unsigned int getSize()
  {
    return size;
  }

  void printList()
  {
    ListNode<T> *curr = front;
    while(curr != NULL) //
    {
      cout << curr -> data << endl;
      curr = curr -> next;
    }
  }

  void insertFront(int d)
  {
    //make sure to check if it isn't an empty List
    //if it is, set back = front
  ListNode<T> *node = new ListNode<T>(d);
  if(size == 0)
  {
    back = front;
  }
  else
  {
    node -> prev = node;
    node -> next = front;
  }
  front = node;
  size++;
  }

  void insertBack(int d)
  {
    //make sure to check if it isn't an empty List
    //if it is, set back = front
  ListNode<T> *node = new ListNode<T>(d);
  if(size == 0)
  {
    front = node;
  }
  else
  {
    back -> next = node;
    node -> prev = back;
  }
  back = node;
  size++;
  }

  T removeFront()
  {
    T temp = front -> data;
    ListNode<T> *ft = front;
    front = front -> next;
    ft -> next = NULL;
    delete ft;
    size--;
    return temp;
  }

  T find(T d)
  {
    int idx = -1;
    ListNode<T> *curr = front;

    while(curr!= NULL)
    {
      ++idx;
      if(curr -> data == d)
      {
        break;
      }
      else
      {
        curr = curr -> next;
      }
    }

    if(curr == NULL) //value doesn't exist
    {
      idx = -1;
    }
    return idx;
  }

  T remove(T d)
  {
    int pos = find(d);
    return deletePos(pos);
  }

  T deletePos(int pos)
  {
    int idx = 0;
    //add a find check if valid
    ListNode<T> *curr = front;
    ListNode<T> *prev = front;

    while(idx != pos)
    {
      prev = curr;
      curr = curr -> next;
      ++idx;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;

    T temp = curr-> data;
    delete curr;
    size--;

    return temp;

  }

  void insertPos(int pos, T d)
  {
    int idx = 0;
    //add a find check if valid
    ListNode<T> *curr = front;
    ListNode<T> *prev = front;

    ListNode<T> *node = new ListNode<T>(d);

    while(idx != pos)
    {
      prev = curr;
      curr = curr -> next;
      ++idx;
    }

    node -> next = curr;
    node -> prev = prev;
    prev -> next = node;
    curr -> prev = node;

    size++;

  }

  T peekPos(int pos)
  {
    if(size < pos)
    {
      throw "pos doesn't exist";
    }

    ListNode<T> *curr = front;

    for(int i=0;i<size;i++)
    {
      curr = curr -> next;
    }

    return curr -> data;

  }



};
