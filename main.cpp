#include<iostream>
#include"room.hpp"
#include<vector>
using namespace std;



int main(){
    
    vector<vector<room>> floors;//vect of vectors for each room on each floor
    const int numOfFloors = 4;
    const int roomsPerFloor = 100;

    //store all floors in a vector
    for(int i=0; i<numOfFloors; i++){
        //store all rooms in a floor vector
        for(int j=0; j<roomsPerFloor; j++){
            vector<room> tempFloor;
            int roomNum = i+1;
            tempFloor.push_back(room(roomNum, "Standard Room", false));
            
        }
    }

    
    
}