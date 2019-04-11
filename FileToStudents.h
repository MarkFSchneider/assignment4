#include <fstream>
#include <string>
#include "Queuer.h"
#include "ListQueue.h"

using namespace std;

class FileToStudents
{
public:
  FileToStudents();
  ~FileToStudents();

  ListQueue<Queuer> outQueuer(string filePath);




};
