#ifndef PGM_H
#define PGM_H

#include <string>
using namespace std;

class Image {
    
    private:
        int width, height, maxValue, desloc;
        
        string magicNum, comment;
    
        char *pixels;
        char *path;
    
    public: 
        //static Image* from_file(const string& path);
        Image();
        ~Image();
        void read(char* path);
        void write(char* path);
        float negative();
        int getHeight();
        int getWidth();
        int getMaxValue();
        int getDesloc();
        string getMagicNum();
        string getComment();
        char * getPath();
        char * getPixels();
        void setHeight(int height);
        void setWidth(int width);
        void setMaxValue(int maxValue);
        void setDesloc(int desloc);
        void setMagicNum(string magicNum);
        void setComment(string comment);
        void setPath(char * path);
        void setPixels(char * pixels);
        


};

#endif 