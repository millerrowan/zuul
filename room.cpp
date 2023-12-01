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

void room::dropItems(char* dropItemInput, vector<char*> &inventory) {
  for(vector<char*>::iterator it = inventory.begin(); it != inventory.end(); it++) {
    if(strcmp(dropItemInput, (*it)) == 0) {
		roomItems.push_back(dropItemInput);
		inventory.erase(it); 
	}
    else {
	cout << "that item is not in your inventory" << endl; 
	}
  }

}

void room::setItems(char* items) {
  roomItems.push_back(items);

}

void room::getItem(char* itemInput, vector<char*> &inventory) {
  for (vector<char*>::iterator it = roomItems.begin(); it != roomItems.end(); it++) {
    if(strcmp(*it, itemInput) == 0) {
      inventory.push_back(itemInput);
      roomItems.erase(it);
    }
    else {
      cout << "item does not exist" << endl; 
    }
  }

}

void room::printRoomItems() {
  cout << "room items: ";
  for(vector<char*>::iterator it = roomItems.begin(); it != roomItems.end(); it++) {
    cout << (*it) << " ";
  }
  cout << endl;
  
} 
