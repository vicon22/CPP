
#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "Error arguments!" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    std::string strToReplace = argv[2];
    std::string newStr = argv[3];
    std::string newFileName = fileName.append(".replace");
    std::string buffer;

    std::ifstream ifs;
    ifs.open(argv[1]);
    if (ifs.fail())
    {
        std::cout<<"can't open file " << fileName << std::endl;
        return (1);
    }

    std::ofstream ofs;
    ofs.open(newFileName);
    if (ofs.fail()) {
        std::cout << "can't create file " << newFileName << std::endl;
        return (1);
    }

    while (true)
    {
        std::getline(ifs, buffer);
        while (true)
        {
            size_t fnd_res = buffer.find(strToReplace);

            if (fnd_res == std::string::npos)
            {
                ofs << buffer;
                break;
            } else {
                ofs << buffer.substr(0, fnd_res);
                ofs << newStr;
                buffer = buffer.substr(fnd_res + strToReplace.size());
            }
        }
        if (ifs.eof())
            break;
        ofs << std::endl;
    }
    ifs.close();
    ofs.close();

    return (0);
}
