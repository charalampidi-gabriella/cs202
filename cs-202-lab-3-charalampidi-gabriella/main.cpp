#include <iostream>
#include <fstream>
#include <sstream>

/**
 * copies a file into a new file
 * @param inputFile holds the name of the input file
 * @param outputFile holds the name of the output file
 */

void copyFile(std::string inputFile, std::string outputFile)
{
    std::ifstream input{inputFile};
    std::ofstream output{outputFile};
    std::string line;

    while (std::getline(input, line))
    {
        output << line << "\n";
    }

    std::cout << "Copy Finished \n";

    output.close();
    input.close();
}

int main()
{
    std::fstream mystream("input-file.txt", std::ios::in);
    std::ofstream output("output-file.txt");

    ////////READ FILE LINE BY LINE/////////
    std::string line;
    while (std::getline(mystream, line))
    {
        std::cout << line << std::endl;
        output << line << std::endl;
    }
    output << "End of the file" << std::endl;
    output.close();
    try
    {
        mystream.clear();
        mystream.seekg(0);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << mystream.tellg() << std::endl;

    ////////END OF READ FILE LINE BY LINE/////////

    ////////READ FILE WORD BY WORD/////////
    std::string word;
    while (mystream >> word)
    {
        std::cout << word << std::endl;
    }

    copyFile("input-file.txt", "out");

    ////////READ FILE WORD BY WORD/////////

    return 0;
}