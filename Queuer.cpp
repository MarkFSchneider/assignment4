#include "Queuer.h"
using namespace std;

Queuer::Queuer()
{
  entryTime = 0;
  windowTime = 0;
  waitingTime = 0;
}

Queuer::Queuer(unsigned int entry, unsigned int window)
{
  entryTime = entry;
  windowTime = window;
  waitingTime = 0;
}

Queuer::~Queuer()
{

}
