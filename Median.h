#include "GenList.h"
using namespace std;


class Median
{
public:
Median();
~Median();

void addElement(int d);
int calculate();

GenList<int> elements;
unsigned int count;




};
