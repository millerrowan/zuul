#include <iostream>
#include <cstring>
#include "room.h" 
#include <vector>
//rooms

using namespace std;

room::room() {



}

room::setExits(char* direction[10], room neighbor) {
  exits.assign(direction, neighbor);
}

room::getExits() {
  
}

}
//map<char*, room*>
//"north", out
//each room will have it's own map 
