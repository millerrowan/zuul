#include <iostream>
#include <cstring>
#include "room.h"
#include <vector>
#include <map>
//main code

using namespace std; 

int main() {


  
  
  
  cout << "Welcome to the Davis Correctional Facility" << endl;
  cout << "You were wrongly imprisoned here 4 years ago and now it's time to get out" << endl;
  cout << "Stuck in your cell, you've devised an escape plan..." << endl;
  cout << "Find the tools around the prison you need to escape and then take them to the perimeter fence" << endl;
  cout << "Type 'help' if you need help." << endl;

  //write room descriptions
  char* MC_Description = new char[50];
  strcpy(MC_Description, "You are in your cell");
  char* C_Description = new char[50];
  strcpy(C_Description, "You are in the cafeteria, get some food");
  char* WO_Description= new char[100];
  strcpy(WO_Description, "You are in the Warden's Office...Get out of there before a guard sees you!");
  char* PY_Description = new char[100];
  strcpy(PY_Description, "You are in the prison yard...you can see freedom through the fence");
  char* P_Description = new char[100];
  strcpy(P_Description, "You are at the perimeter fence...almost free just don't let a guard see you");
  char* GS_Description = new char[60];
  strcpy(GS_Description, "You are in the guard station...you like danger I guess");
  char* L_Description = new char[50];
  strcpy(L_Description, "You are in the library...shhh");
  char* G_Description = new char[60];
  strcpy(G_Description, "You are in the gym...you need muscle to dig a hole");
  char* K_Description = new char[70];
  strcpy(K_Description, "You are in the Kitchen...mmmh the delicous smell of sludge");
  char* I_Description = new char[100];
  strcpy(I_Description, "You are in the infirmirary...hope you don't have to come here often");
  char* C2_Description = new char[100];
  strcpy(C2_Description, "You are in cell#2...there might be some items hidden in here");
  char* C3_Description = new char[100];
  strcpy(C3_Description, "You are in cell#3...get out of here before another prisoner sees you");
  char* BP_Description = new char[300];
  strcpy(BP_Description, "You are in the bullpen...if you want to get the necessary tools to escape it might be a good idea to check the other prisoners' cells");
  char* UG_Description = new char[300];
  strcpy(UG_Description, "You are underground now...good job digging that hole, now you better start tunneling so you can reach the forest");
  char* F_Description = new char[100];
  strcpy(F_Description, "You've reached the forest! You are free... for now"); 
  
  
  
  //creating rooms

  room* myCell = new room(MC_Description);
  room* cafeteria = new room(C_Description);
  room* wardenOffice = new room(WO_Description);
  room* prisonYard = new room(PY_Description);
  room* perimeter = new room(P_Description);
  room* guardStation = new room(GS_Description);
  room* library = new room(L_Description);
  room* gym = new room(G_Description);
  room* kitchen = new room(K_Description);
  room* infirmary = new room(I_Description);
  room* cell2 = new room(C2_Description);
  room* cell3 = new room(C3_Description);
  room* bullpen = new room(BP_Description);
  room* underground = new room(UG_Description);
  room* forest = new room(F_Description); 


  //creating the directions

  char* north = new char[10];
  strcpy(north, "north");
  char* south = new char[10];
  strcpy(south, "south");
  char* east = new char[10];
  strcpy(east, "east");
  char* west = new char[10];
  strcpy(west, "west");

  //assigning exits to rooms 
  
  myCell->setExits(north, bullpen);
  cell3->setExits(east, bullpen);
  cell2->setExits(west, bullpen);

  bullpen->setExits(west, cell3);
  bullpen->setExits(east, cell2);
  bullpen->setExits(south, myCell);

  cafeteria->setExits(north, library);
  cafeteria->setExits(south, bullpen);
  cafeteria->setExits(west, kitchen);
  cafeteria->setExits(east, gym);

  kitchen->setExits(east, cafeteria);

  gym->setExits(west, cafeteria);
  gym->setExits(east, infirmary);
  gym->setExits(north, wardenOffice);

  infirmary->setExits(west, gym);

  wardenOffice->setExits(south, gym);
  wardenOffice->setExits(west, library);

  library->setExits(south, cafeteria);
  library->setExits(east, wardenOffice);
  library->setExits(west, prisonYard);

  prisonYard->setExits(east, library);
  prisonYard->setExits(west, perimeter);
  prisonYard->setExits(south, guardStation);

  guardStation->setExits(north, prisonYard);

  perimeter->setExits(east, prisonYard);
  perimeter->setExits(south, underground);

  underground->setExits(north, perimeter);
  underground->setExits(west, forest);

				  
  bool stillPlaying = true;
    
  while (stillPlaying == true) {
       
    
    
  }

  return 0;
}