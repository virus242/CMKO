#include <iostream>
#include "../structs/structs.h"

void showHelp(){
    std::cout << "Программа предназначена для формирования командных слов МКО ГОСТа Р 52070\n\n"
              << "Опции:\n"
              << "      -h, --help              показать эту справку\n"
              << "      -s <шифр>               шифр космического аппарата\n"
              << "      -i <экземпляр>          версия космического аппарата\n"
              << "      -c <путь>               свой путь конфигурационного файла\n";
    return;
}

Conf parseArguments(int argc, char* argv[]){
    Conf conf;

    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];

        if (arg == "-s" && i + 1 < argc)
        {
            conf.code = true;
        }

        else if (arg == "-i" && i + 1 < argc)
        {
            conf.instance = true;
        }

        else if (arg == "-c" && i + 1 < argc)
        {
            conf.pathConf = true;
        }

        else
        {
            conf.help = true;
        }
        
    }
    return conf;
}