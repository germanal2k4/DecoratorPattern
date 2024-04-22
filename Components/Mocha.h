//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#ifndef UNTITLED_MOCHA_H
#define UNTITLED_MOCHA_H

#include "Decorator.h"
#include "memory"

class Mocha : public Decorator{
public:
    explicit Mocha(const std::shared_ptr<Cofee>& cof);
    std::string getDescription() override;
    double cost() override;
};


#endif //UNTITLED_MOCHA_H
