// Adan Rivera
// rivera.adan850@csu.fullerton.edu
// @AdanR562
// Partners: @mannyoreos

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

double sum{0.0};

for (size_t i = 1; i < arguments.size(); ++i) {
  try {
    double value = std::stod(arguments[i]);
    sum += value;
  } catch (const std::invalid_argument& e) {
  std::cerr << "Error argument" << arguments[i] << "is not a valid number" << std::endl;
  return 1;
  }
}

double average = sum / (arguments.size() - 1);

std::cout << "Average = " << average << "\n";

  return 0;
}
