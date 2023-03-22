using namespace std;
#include<string>
#include<map>
#include<tuple>

class room{
    private:
        
        int roomNumber, roomCapacity, numberOfBeds;
        string roomType, bedType; //standard, deluxe, executive, penthouse rooms
        bool occupied;

        //map each room type to capacities, bettypes ecte
        const std::map<string, std::tuple<int, int, string>> roomPropertes = {

            //room type -> capacity, bednumber, bedsize
            {"Standard Room", {2, 1, "double"}},
            {"Deluxe Suite", {4, 2, "double"}},
            {"Executive Suite", {8, 4, "queen"}},
            {"Penthouse", {14, 8, "king"}}
        };

    
    public:
        //constructos
        room(int roomNumber, string roomType, bool occupied){
            this->roomNumber = roomNumber;
            this->roomType = roomType;
            this->occupied = occupied;
        }
        room(){
            roomNumber = 0;
            roomType = "Standard Room";
            occupied = false;
        }

        void setRoomNumber(int &roomNumber){
            this->roomNumber = roomNumber;
        }
        void setRoomType(string &roomType){
            this->roomType = roomType;
        }
        void setOccupied(bool &occupied){
            this->occupied = occupied;
        }
        int getRoomNumber(){
            return roomNumber;
        }
        string getRoomType(){
            return roomType;
        }
        bool getOccupied(){
            return occupied;
        }

        int getRoomCapacity()const{ //number of people that can comfortable fit in each room
            return std::get<0>(roomPropertes.at(roomType));// reads room data map
        }
        int getNumberofBeds()const{ //number of beds in unit
            return std::get<1>(roomPropertes.at(roomType));
        }
        string getBedType()const{ // type of beds in unit
            return std::get<2>(roomPropertes.at(roomType));
        }
};