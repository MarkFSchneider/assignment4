#include <iostream>
using namespace std;

template<class T>
class ListNode
{
public:

  int data;
  ListNode<T> *next;
  ListNode<T> *prev;

  ListNode()
  {
    //default
  }
  ListNode(T d)
  {
    data = d;
    next = NULL; //might need nullptr
    prev = NULL;
  }
  ~ListNode()
  {
    delete next;
    delete prev;
  }

};
