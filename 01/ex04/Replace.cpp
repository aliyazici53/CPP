#include "Replace.h"

Replace::Replace(const std::string &pFilename, const std::string &pS1, const std::string &pS2) :s1(pS1), s2(pS2), filename(pFilename) 
{
    std::cout << "Replace's Constructor has been called!" << std::endl;
}

Replace::~Replace() {
    std::cout << "Replace's Destructor has been called!" << std::endl;
}

void Replace::replace() 
{
    std::ifstream ifs(filename);
    std::string line, stream;
    while (getline(ifs, line)) 
    {
        processLine(line);
        stream.append(line); //
    }
    std::cout << stream << std::endl; //stream'i görüntüle.
    std::ofstream ofs; //output file stream
    ofs.open(filename.append(".replace"), std::ios::out); //filename.replace aç ve write modunu aç
    ofs << stream; //replace içine stream'i yaz.
    ifs.close(); //input stream'i kapat.
    ofs.close(); //output stream'i kapat.
}

void Replace::processLine(std::string &line) 
{
    std::string::size_type itr = line.find(s1);
    while(itr != std::string::npos) 
    {
		line.erase(itr, s1.length());
		line.insert(itr, s2);
        itr = line.find(s1);
    }
}
