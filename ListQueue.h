#include "GenList.h"

using namespace std;

template <class T>
class ListQueue
{
public:
  GenList<T> queueList;

  ListQueue()
  {
    queueList = GenList<T>();
  }

  ~ListQueue()
  {

  }

  void insert(T d)
  {
    queueList.insertBack(d);
  }

  T remove()
  {
    return queueList.removeFront();
  }



};
