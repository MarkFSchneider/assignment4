#include "LineStats.h"
using namespace std;

LineStats::LineStats()
{
  longIdle = 0;
  longWait = 0;
  tenWait = 0;
  fiveIdle = 0;

  studentMean = Mean();
  windowMean = Mean();

  studentMedian = Median();
}

LineStats::~LineStats()
{

}

void LineStats::updateStudent(int wait)
{
  studentMean.addElement(wait);
  studentMedian.addElement(wait);
  updateWaits(wait);
}

void LineStats::updateWindow(int idle)
{
  windowMean.addElement(idle);
  updateIdles(idle);
}

void LineStats::updateWaits(int wait)
{
  if(wait > longWait)
  {
    longWait = wait;
  }
  if(wait > 10)
  {
    tenWait++;
  }
}

void LineStats::updateIdles(int idle)
{
  if(idle > longIdle)
  {
    longIdle = idle;
  }

  if(idle > 5)
  {
    fiveIdle++;
  }
}
