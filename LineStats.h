#include "Mean.h"
#include "Median.h"

using namespace std;

class LineStats
{
  /*
  Tracks all 7 output variables:
  Longest wait
  Waits longer than 10
  Mean Wait
  Median wait
  longest idle
  idles longer than 5
  Mean idle
  */

public:
  LineStats();
  ~LineStats();

  void updateStudent(int wait);
  void updateWindow(int idle);

  void updateWaits(int wait);
  void updateIdles(int idle);

  int longIdle;
  int longWait;

  int tenWait;
  int fiveIdle;

  Mean studentMean;
  Mean windowMean;
  Median studentMedian;
};
