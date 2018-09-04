#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "pgm.hpp"

using namespace std;

int main(int argc, char const *argv[])
{

    string path;
    cin >> path;

    Image * img = new Image();
    img->read(img -> getPath());

    
    delete img;

    return 0;
}
