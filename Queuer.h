
using namespace std;

class Queuer
{
public:
  Queuer();
  Queuer(unsigned int entry, unsigned int window);
  ~Queuer();

  unsigned int entryTime;
  unsigned int windowTime;
  unsigned int waitingTime;

};
