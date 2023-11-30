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

room* room::getExits(char* directionInput) {
  for (map<char*, room*>::iterator it = exits.begin(); it != exits.end(); it++) {
     if(strcmp(it->first, directionInput) == 0) {
       return it-> second;
     }
  }
  return NULL;
}

void room::dropItems() {

  
}

void room::setItems(char* items) {
  roomItems.push_back(items);

}

void room::getItem(char* itemInput, vector<char*> &inventory) {
  for (vector<char*>::iterator it = roomItems.begin(); it != roomItems.end(); it++) {
    if(strcmp(*it, itemInput) == 0) {
      inventory.push_back(itemInput); 
    }
    else {
      cout << "item does not exist" << endl; 
    }
  }

}

void room::printRoomItems() {
  for(vector<char*>::iterator it = roomItems.begin(); it != roomItems.end(); it++) {
    cout << "items: " << (*it) << endl; 
  }
  
} 
