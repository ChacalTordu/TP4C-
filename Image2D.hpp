//
//  Image2D.hpp
//  TP1C++
//
//  Created by Gustavo Guerrero on 15/09/2019.
//  Copyright © 2019 Gustavo Guerrero. All rights reserved.
//

#ifndef Image2D_hpp
#define Image2D_hpp
#include <stdio.h>
#include <iostream>
#include <tgmath.h>

class Image2D
{
public:
    //Constructeur
    Image2D();
    Image2D(int nx, int ny, int ngl, double milx, double mily, int p0);
    Image2D(char* path,double milx, double mily);
    //Méthodes
    ~Image2D();


    int getNbx();
    void setNbx(int a);
    int getNby();
    void setNby(int a);
    int getNgl();
    void setNgl(int a);
    long int getSize();
    double getDx();
    void setDx(double a);
    double getDy();
    void setDy(double a);

    int getPixelValue(int i,int j);
    void setPixelValue(int i,int j, int a);
    void Enregistrer_image(char* filename);

    // Les opérateurs de base:
    Image2D operator+(const Image2D &);
    Image2D operator-(const Image2D &);
    Image2D operator=(const Image2D &);

protected:
    int** ptr;//. Tels que ptr[i] représente un pointeur sur les valeurs des pixels de la ligne i et ptr[i][j] représente la valeur du pixel i,j.
    void alloue_partie_dynamique(int dimx, int dimy);// : fonction d’allocation dynamique prenant en argument le nombre de pixels en x et en y. Utilisez new.
    void libere_partie_dynamique();// : fonction permettant libérer la mémoire dynamique. Utilisez delete.
    void init(int valeur_init);// : fonction permettant d’initialiser les valeurs des pixels à la valeur valeur_init.


private:

    int nbx;/////nombre de pixels sur l'axe x.
    int nby;/////nombre de pixels sur l'axe y.
    int number_grey_level;/////nombre de niveaux de gris.
    long int size;/////nombre total de pixels dans l'image.
    double dx;/////taille d'un pixel en millimètres sur l'axe x.
    double dy;/////taille d'un pixel en millimètres sur l'axe y.
    unsigned char entete[54];////ENTET DE L'IMAGE

};


#endif /* Image2D_hpp */
