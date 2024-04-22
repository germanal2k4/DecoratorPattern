//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#ifndef UNTITLED_DECORATOR_H
#define UNTITLED_DECORATOR_H

#include <memory>
#include "../Coffees/Cofee.h"

class Decorator : public Cofee{
protected:
    std::shared_ptr<Cofee> cofee;
public:
    Decorator(std::shared_ptr<Cofee> cofee) : cofee(cofee){}
    double cost() override;
    std::string getDescription() override;
};
#endif //UNTITLED_DECORATOR_H
