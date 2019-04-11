#include "Attendant.h"
using namespace std;

Attendant::Attendant()
{
  idleTime = 0;
  attendee = NULL;
}

Attendant::~Attendant()
{
  delete attendee;
}

bool Attendant::isEmpty()
{
  if(attendee == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Attendant::setAttendee(Queuer &first)
{
  attendee = &first;
}

unsigned int Attendant::removeAttendee()
{
  attendee = NULL;
  unsigned int temp = idleTime;
  idleTime = 0;
  return temp;
}
