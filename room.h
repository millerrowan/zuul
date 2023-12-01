#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <cstring>
#include <vector>
#include <map>


using namespace std; 

class room {
public:
  //all methods in room
  room(char* Description);
  void setExits(char* direction, room* neighbor);
  void getExitString();
  room* getExits(char* directionInput);
  void getItem(char* itemInput, vector<char*> &inventory);
  void setItems(char* items);
  void dropItems(char* dropItemInput, vector<char*> &inventory);
  void printRoomItems();
  void printDescription(); 
protected:
  //variables in room
  map<char*, room*> exits;
  char* direction;
  room* neighbor; 
  char* description1;
  char* directionInput; 
  char* items;
  vector<char*> roomItems;
  char* itemInput;
  char* dropItemInput;
};
#endif
