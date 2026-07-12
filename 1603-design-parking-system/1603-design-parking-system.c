
typedef struct {
    //Declaring structure members
    int big;
    int medium;
    int small;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    //memory allocation and initialization
    ParkingSystem *p = malloc(sizeof(ParkingSystem));
    p->big = big;
    p->medium = medium;
    p->small = small;
    return p;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    //Cheacking space is available or not 
    switch(carType){
        case 1:{
            if(obj->big>0)   
            {obj->big--; return true;}
            else return false; break;
        }
        case 2:{
            if(obj->medium>0)
            {obj->medium--; return true;}
            else return false; break;
        }
        case 3:{
            if(obj->small>0)
            {obj->small--; return true;}
            else return false;
        }
    }
    return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    //Freeing the memory
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/