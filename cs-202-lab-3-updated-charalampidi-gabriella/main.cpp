#include <iostream>
#include <fstream>
#include <sstream>

/**
 * read inputFile and append its contents to outputFile
 * @param inputFile file created in copyAndAppend
 * @param outputFile final appendme file
 */
void appendMe(std::string inputFile, std::string outputFile)
{

    std::ifstream input(inputFile);
    std::ofstream output(outputFile, std::ios::out | std::ios::app);

    for (std::string line; std::getline(input, line);)
    {
        output << line << std::endl;
    }
}

/**
 * reads a file and writes in in another file. Then reads the file created and appends it to to a third file
 * @param inputFile name of the input file
 * @param outputFile name of the output file
 * @param appendme appends contents of file to output file
 */
void copyAndAppend(std::string inputFile, std::string outputFile, std::string appendme)
{
    std::ifstream input{inputFile};
    std::ofstream output{outputFile};
    std::string line;

    output << "What follows is the contents of " << inputFile << std::endl;

    while (std::getline(input, line))
    {
        output << line << std::endl;
    }

    std::cout << "Copy Finished \n";
    output.close();

    appendMe(outputFile, appendme);
}

int main()
{
    copyAndAppend("input-file.txt", "output-file.txt", "appendme.txt");

    return 0;
}
