//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#ifndef UNTITLED_WATERFORAFRICA_H
#define UNTITLED_WATERFORAFRICA_H

#include "Decorator.h"
#include "memory"

class WaterForAfrica : public Decorator{

public:
    explicit WaterForAfrica(const std::shared_ptr<Cofee>& cof);
    std::string getDescription() override;
    double cost() override;
};


#endif //UNTITLED_WATERFORAFRICA_H
