#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "pgm.hpp"

using namespace std;

Image::Image(){
    path = "";
    magicNum = "";
    comment = "";
    width = 0;
    height = 0;
    maxValue = 0;
    desloc = 0;
};

Image::~Image(){

};



void Image::setHeight(int height){
    this ->height = height;
}

void Image::setWidth(int width){
    this -> width = width;
}

void Image::setMaxValue(int maxValue){
    this -> maxValue = maxValue; 
}

void Image::setDesloc(int desloc){
    this -> desloc = desloc;
}

void Image::setMagicNum(string magicNum){
    this -> magicNum = magicNum;
}

void Image::setComment(string comment){
    this -> comment = comment;
}

void Image::setPath(string path){
    this -> path = path;
}

void Image::setPixels(char *pixels){
    this -> pixels = pixels;
}

int Image::getHeight(){
    return height;
}

int Image::getWidth(){
    return width;
}

int Image::getMaxValue(){
    return maxValue;
}

int Image::getDesloc(){
    return desloc;
}

string Image::getMagicNum(){
    return magicNum;
} 

string Image::getComment(){
    return comment;
}

string Image::getPath(){
    return path;
}

char *Image::getPixels(){
    return pixels;
}

void Image::read(string path){
    fstream file;
    int width, height, maxValue, desloc;
    string magicNum, comment, change;
    stringstream line;

    file.open(path);

    getline(file, magicNum);
    setMagicNum(magicNum);

    getline(file, comment);
    setComment(comment);

    getline(file, change);
    line.str(change);
    line >> width >> height;
    file >> maxValue;

    setWidth(width);
    setHeight(height);
    setMaxValue(maxValue);
    
    //file.get();
    char * pixels = new char[height * width];
    setPixels(pixels);
    file.read(pixels, height * width);

}

void Image::write(){
    

}

/*float Image::negative(){
    
}*/