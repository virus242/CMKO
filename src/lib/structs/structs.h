#include <vector>
#include <string>

struct Conf
{
    std::vector<std::string> inputFiles;
    std::string outputFile;
    bool help = false;
    bool code = false;
    bool instance = false;
    bool pathConf = false;
};
