#include <iostream>
#include <cstring>
#include <vector>


using namespace std; 

class room {
public:
  

protected: 
  map<char*, room*> exits;
  char* direction;
  room neighbor; 

}
