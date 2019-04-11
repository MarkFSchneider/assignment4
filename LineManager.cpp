#include "LineManager.h"
using namespace std;

LineManager::LineManager(unsigned int numWindows)
{
  stats = LineStats();
  line = ListQueue<Queuer>();
  staging = ListQueue<Queuer>();
  windows = new Attendant[numWindows];
  attendantNum = numWindows;

  populateWindows();

  populateStaging();

}

LineManager::~LineManager()
{
  delete[] windows;
}

void LineManager::populateWindows()
{
  for(unsigned int i = 0; i < attendantNum; i++ )
  {
    windows[i] = Attendant();
  }
}

void LineManager::populateStaging()
{

}
