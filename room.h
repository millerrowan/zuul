#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <cstring>
#include <vector>
#include <map>


using namespace std; 

class room {
public:
  room(char* Description);
  void setExits(char* direction, room* neighbor);
  void getExitString();
  room* getExits(char* input);
  char* input; 
protected: 
  map<char*, room*> exits;
  char* direction;
  room* neighbor; 
  char* description1;
  char* items;
  vector<items*> inventory;
};
#endif
