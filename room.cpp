#include <iostream>
#include <cstring>
#include "room.h" 
#include <vector>
#include <map>
//rooms

using namespace std;

room::room(char* Description) {
  description1 = new char[300];
  strcpy(description1, Description);

}

void room::printDescription() {
  cout << description1 << endl; 
}

void room::setExits(char* direction, room* neighbor) {
  exits.insert(pair<char*, room*>(direction, neighbor));
}

void room::getExitString() {
  cout << "Exits" << endl; 
  for (map<char*, room*>::iterator it = exits.begin(); it != exits.end(); it++) {
    cout << it->first << " ";
      }
  cout << endl;
}

room* room::getExits(char* input) {
  for (map<char*, room*>::iterator it = exits.begin(); it != exits.end(); it++) {
     if(strcmp(it->first, input) == 0) {
       return it-> second;
     }
  }
  return NULL;
}

void room::getItem() {

  
}

void room::setItems() {


}

void room::removeItems() {


}

void room::printRoomItems() {

  
}

//map<char*, room*>
//"north", out
//each room will have it's own map 
