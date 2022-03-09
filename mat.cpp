#include "mat.hpp"
using namespace ariel;
#include <iostream>
#include <stdexcept>
using namespace std;

std::string ariel::mat(int column, int row, char firstSymbol, char secondSymbol){
    
    if (column % 2 == 0 || row % 2 == 0){
        throw invalid_argument("Mat size is always odd");
    }
    if (column < 0 || row < 0)
    {
       throw invalid_argument("Mat size is always positive number");
    }
    
     return "column";
    
    };
