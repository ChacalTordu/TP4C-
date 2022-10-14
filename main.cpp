#include <iostream>
#include "Image2D.hpp"
using namespace std;

int main(){

    /*
    *
    *
    * QUESTION IMPLEMENTATION DES OPERATEURS + ET -
    * 
    * 
    */

    Image2D A;
    Image2D B;

    Image2D Image_Addition = A + B;
    // Image2D Image_Soustraction = A - B;
    // Image2D Image_Egale = A;

    Image_Addition.Enregistrer_image("imageaddition.bmp");

    return 0;
}
