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

//prints out room description
void room::printDescription() {
  cout << description1 << endl; 
}

//sets the exits for each room
void room::setExits(char* direction, room* neighbor) {
  exits.insert(pair<char*, room*>(direction, neighbor));
}

//prints out the exits for each room
void room::getExitString() {
  cout << "Exits" << endl; 
  for (map<char*, room*>::iterator it = exits.begin(); it != exits.end(); it++) {
    cout << it->first << " ";
      }
  cout << endl;
}

//gets the exits for the current room and checks if the user input matches an exit. 
room* room::getExits(char* directionInput) {
  for (map<char*, room*>::iterator it = exits.begin(); it != exits.end(); it++) {
     if(strcmp(it->first, directionInput) == 0) {
       return it-> second;
     }
  }
  return NULL;
}

//drops the item the user selects from their inventory
void room::dropItems(char* dropItemInput, vector<char*> &inventory) {
  for(vector<char*>::iterator it = inventory.begin(); it != inventory.end(); it++) {
    if(strcmp(dropItemInput, (*it)) == 0) {
		roomItems.push_back(dropItemInput);
		inventory.erase(it);
		break; 
	}
    else {
	cout << "that item is not in your inventory" << endl; 
	}
  }

}

//sets items in rooms
void room::setItems(char* items) {
  roomItems.push_back(items);

}

//puts the item that the user gets into their inventory
void room::getItem(char* itemInput, vector<char*> &inventory) {
  if (roomItems.size() == 0) {
    cout << "room does not contain any items" << endl;
  }
  else {
    for (vector<char*>::iterator it = roomItems.begin(); it != roomItems.end(); it++) {
      if(strcmp(*it, itemInput) == 0) {
	//puts into inventory
	inventory.push_back(itemInput);
	//removes from room items
	roomItems.erase(it);
	break;
      }
      else {
	cout << "item does not exist" << endl; 
      }
    }
  }
}

//prints out room items
void room::printRoomItems() {
  cout << "room items: ";
  for(vector<char*>::iterator it = roomItems.begin(); it != roomItems.end(); it++) {
    cout << (*it) << " ";
  }
  cout << endl;
  
} 
