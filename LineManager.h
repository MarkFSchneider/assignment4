#include "Attendant.h"
#include "LineStats.h"
#include "FileToStudents.h"

using namespace std;

class LineManager
{
public:
  LineManager(unsigned int numWindows, string filePath);
  ~LineManager();

  void addStaging();
  void moveStagingToLine();

  void populateWindows();

  void populateStaging();

  LineStats stats;
  ListQueue<Queuer> line;
  ListQueue<Queuer> staging;

  Attendant *windows;

  unsigned int attendantNum;




};
