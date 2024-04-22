//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#ifndef UNTITLED_EXPRESSO_H
#define UNTITLED_EXPRESSO_H

#include "Cofee.h"

class Expresso : public Cofee{
public:
    explicit Expresso();
    double cost() override;
};


#endif //UNTITLED_EXPRESSO_H
