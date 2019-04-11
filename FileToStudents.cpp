#include "FileToStudents.h"
using namespace std;

FileToStudents::FileToStudents()
{
}

FileToStudents::~FileToStudents()
{

}

ListQueue<Queuer>FileToStudents::outQueuer(string filePath)
{
  ListQueue<Queuer> outList = ListQueue<Queuer>();
/*
  ifstream infile(filePath);

  unsigned int line;
  infile >> line; //Eats up the first window line
  while (infile >> line)
  {
    unsigned int entryTime = line; //Entry Time

    infile >> line; //Now is Number of students
    unsigned int numStudents = line;

    for(unsigned int i = 0; i<numStudents; i++)
    {
      infile >> line; //Now is the window time for student N
      unsigned int windowTime = line;
      outList.insert(Queuer(entryTime, windowTime));
    }
    //N students added to the queue
    //Next While iteration will either leave the file, or loop to next entry time

  } */
  return outList;
}
