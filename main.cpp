#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "pgm.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Image img;
    char * path;
    cin >> path;

    img.read(path);
    


    return 0;
}
