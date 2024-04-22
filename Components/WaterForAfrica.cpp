//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#include "WaterForAfrica.h"

#include <utility>

WaterForAfrica::WaterForAfrica(const std::shared_ptr<Cofee>& cof) : Decorator(cofee){}

double WaterForAfrica::cost() {
    return cofee->cost() + 0.02;
}

std::string WaterForAfrica::getDescription() {
    return  cofee->getDescription().append(", with water instead of children in Africa here u are");
}