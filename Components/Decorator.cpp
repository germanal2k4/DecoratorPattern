//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#include "Decorator.h"

std::string Decorator::getDescription() {
    return cofee->getDescription();
}

double Decorator::cost() {
    return cofee->cost();
}