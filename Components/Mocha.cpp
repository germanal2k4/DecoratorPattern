//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#include "Mocha.h"

#include <utility>

Mocha::Mocha(const std::shared_ptr<Cofee>& cof) : Decorator(cofee){}

std::string Mocha::getDescription() {
    return cofee->getDescription().append(", Mocha");
}

double Mocha::cost() {
    return cofee->cost() + 0.20;
}
