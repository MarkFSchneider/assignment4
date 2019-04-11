#include "Queuer.h"
#include <cstddef>
using namespace std;

class Attendant
{
public:

  Attendant();
  ~Attendant();

  bool isEmpty();

  void setAttendee(Queuer &first);
  unsigned int removeAttendee();

  unsigned int idleTime;
  Queuer *attendee;

};
