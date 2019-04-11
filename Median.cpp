#include "Median.h"
using namespace std;

Median::Median()
{
    elements = GenList<int>();
    count = 0;
}

Median::~Median()
{

}

void Median::addElement(int d)
{
  if(elements.getSize() == 0)
  {
  elements.insertFront(d);
  }
  else
  {
    //Check if element at position i is less than or equal d and at i+1 is greater or equal to d, then place d at position

    for(unsigned int i = 0; i<elements.getSize() - 1; i++)
    {
      int test = elements.peekPos(i);
      int test2 = elements.peekPos(i+1);

      if(d <= test)
      {
        elements.insertPos(i, d);
      }
      else if(test < d && d <= test2)
      {
        elements.insertPos(i+1, d);
      }

  }
  count++;
}
}

int Median::calculate()
{
  int result = 0;

  if(count % 2 == 0)
  {
    result = elements.peekPos((int)(count / 2.0));
  }
  else
  {
    result = elements.peekPos((int)((count + 1)/2.0));
  }

  return result;
}
