#include <iostream>
#include <Foco.hpp>
#include <SerieFocos.hpp>



int main ( int argc, char * arg[])
    
{
    SerieFocos serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();
    serie.MostrarFocos();

    return 0;
}
