#include "Mean.h"
using namespace std;

Mean::Mean()
{
  sum = 0;
  count = 0;
}

Mean::~Mean()
{

}

void Mean::addElement(int d)
{
  count++;
  sum+=d;
}

float Mean::calculate()
{
  return (float)sum / count;
}
