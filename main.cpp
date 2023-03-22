#include<iostream>
#include"room.hpp"
#include<vector>
using namespace std;



int main(){
    
    vector<vector<room>> floors;//vect of vectors for each room on each floor
    const int numOfFloors = 4;
    const int roomsPerFloor = 100;

    vector<vector<room>> floors;//vector of all floors

    //store all floors in a vector
    for(int i=0; i<numOfFloors; i++){
        vector<room> rooms; //all rooms on floor

        for(int j=0; j<roomsPerFloor; j++){
            int roomNum = i+1;
            //add rooms to floor
            rooms.push_back(room(roomNum, "Standard Rom", false));
        }
        //add floors to floor vector.
        floors.push_back(rooms);
    }

    
    
}