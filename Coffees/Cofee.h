//
// Created by 21577082@sigma.sbrf.ru on 22.04.24.
//

#ifndef UNTITLED_COFEE_H
#define UNTITLED_COFEE_H

#include <string>

class Cofee {
protected:
    std::string description = "Ama coffee";
public:
    [[nodiscard]] virtual std::string getDescription();
    virtual double cost() = 0;
    virtual ~Cofee() = default;
};


#endif //UNTITLED_COFEE_H
