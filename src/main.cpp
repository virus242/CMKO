#include <iostream>
#include <string>
#include "lib/termWork/termWork.h"
#include "lib/structs/structs.h"

bool checkHelp(Conf conf){

    if (conf.help)
    {
        showHelp();
        return true;
    }
    return false;
}

int main(int argc, char* argv[]){
    
    Conf conf = parseArguments(argc, argv);

    if (checkHelp(conf)){return 0;}

    return 0;
}