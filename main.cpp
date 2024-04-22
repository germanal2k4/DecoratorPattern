#include <iostream>
#include "memory"
#include "Coffees/Cofee.h"
#include "Coffees/Cacao.h"
#include "Components/Decorator.h"
#include "Components/WaterForAfrica.h"
#include "Components/Mocha.h"

int main() {
    std::shared_ptr<Cofee> cofeePtr = std::make_shared<Cacao>();
    std::cout << cofeePtr->getDescription() << ", $" << cofeePtr->cost();
    auto cofeeMocha = std::make_shared<Mocha>(cofeePtr);
}
