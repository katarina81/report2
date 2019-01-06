#include <iostream>
#include <stdio.h>
using namespace std;

class hm{
public:
  int hour;
  int minute;
  int tm;
  hm(int);
};


hm::hm(int timeInMinutes){
  tm = timeInMinutes;
}

int main()
{

  hm t(125);
  cout << t.tm / 60;
  return 0;
}
