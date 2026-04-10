#include "logic.h"
#include <algorithm>
#include <cctype>

static std::string trim(const std::string& input) {
    size_t start = input.find_first_not_of(" ");
    if (start == std::string::npos) return "";
    size_t end = input.find_last_not_of(" ");
    return input.substr(start, end - start + 1);
}

std::string calculateGrade(int score) {
    if (score < 0 || score > 100) return "Ugyldig";
    if (score >= 90) return "A";
    if (score >= 80) return "B";
    if (score >= 70) return "C";
    if (score > 60) return "D";
    return "F";
}

int calculateDiscount(int amount) {
    if (amount < 0) return -1;
    if (amount >= 1000) return 30;
    if (amount >= 500) return 20;
    if (amount > 100) return 10;
    return 0;
}

bool canBookSeats(int requestedSeats) {
    if (requestedSeats < 1) return false;
    if (requestedSeats <= 6) return true;
    return false;
}

std::string formatUsername(const std::string& name) {
    if (name.empty()) return "anonymous";
    std::string value = trim(name);
    std::transform(value.begin(), value.end(), value.begin(),
        [](unsigned char c){ return std::tolower(c); });
    return value;
}
