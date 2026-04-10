#include "logic.h"
#include <cassert>
#include <iostream>

int main() {
    assert(calculateGrade(90) == "A");
    assert(calculateGrade(80) == "B");
    assert(calculateGrade(70) == "C");
    assert(calculateGrade(60) == "D");
    assert(calculateGrade(-1) == "Ugyldig");
    assert(calculateGrade(101) == "Ugyldig");

    assert(calculateDiscount(0) == 0);
    assert(calculateDiscount(100) == 10);
    assert(calculateDiscount(500) == 20);
    assert(calculateDiscount(1000) == 20);
    assert(calculateDiscount(-1) == -1);

    assert(canBookSeats(1) == true);
    assert(canBookSeats(5) == true);
    assert(canBookSeats(6) == false);

    assert(formatUsername("  Alice  ") == "Alice");
    assert(formatUsername("   ") == "Ugyldig");

    std::cout << "Alle tests bestaaet\n";
    return 0;
}
