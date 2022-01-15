
#include "../include/Studio.h"
#include <iostream>

Studio* backup = nullptr;

using namespace std;

int main(int argc, char** argv){
    if(argc!=2){
        std::cout << "usage: studio <config_path>" << std::endl;
        return 0;
    }

    std::string configurationFile = argv[1];

    Studio studio(configurationFile);

    vector<Workout> shay;
    studio.start();
    if(backup!=nullptr){
        delete backup;
        backup = nullptr;
    }
    return 0;
}

