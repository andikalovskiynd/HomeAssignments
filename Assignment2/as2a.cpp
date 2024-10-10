/*
    Andikalovskiy Nikita Dmitrievich st131335@spbu.ru
    Home Assignment 2a
*/

#include <iostream>
#include <fstream>
#include <filesystem>

int main()

{
    std::ifstream infile;
    infile.open("input", std::ios::binary | std::ios::in);
    std::size_t inputsize = std::filesystem::file_size("input");

    int* Array = new int[inputsize / sizeof(int)];

    infile.read(reinterpret_cast<char*>(Array), inputsize);
    infile.close();

        std::size_t size = inputsize / sizeof(int);

        for(std::size_t i = 0; i < size / 2; i++)

        {
            std::swap(Array[i], Array[size - 1 - i]);
        }

    std::ofstream outfile;
    outfile.open("output", std::ios::binary | std::ios::in);
    outfile.write(reinterpret_cast<char*>(Array), inputsize);
    outfile.close();

    delete[] Array;

    return 0;
}
