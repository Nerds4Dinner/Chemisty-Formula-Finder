#include "chemistry.hpp"
#include <iostream>
#include <vector>
using namespace std;

vector<string> getInput() {
    string givenElement;
    char measurement;
    string equation;
    string unknownElement;
    char unknownMeasurement;
    vector<string> problem;
    cout << "Welcome to the Formula Finder!\n(Made with Visual Studio Code)\nType 'Quit' to Quit\n";
    cout << "Firstly, please type in the element or compound you want to convert. (Ex: Fe for Iron, Fe2O3 for Iron Oxide)\n";
    cin >> givenElement;
    problem.push_back(givenElement);
    cout << "Cool. What is the given amount measured in? g) grams m) moles l) liters\n";
    cin >> measurement;
    problem.push_back(to_string(measurement));
    cout << "Ok. Could you input the equation. After each element/Compound, add a space. (Ex: 2H2O2 > 2H2O + O2)\n";
    cin >> equation;
    problem.push_back(equation);
    cout << "Alright. What Compound Are you trying to find? (Ex: Fe for Iron, Fe2O3)\n";
    cin >> unknownElement;
    problem.push_back(unknownElement);
    cout << "Last Question. What is the answer going to be measured in? g) grams m) moles l) liters\n";
    cin >> unknownMeasurement;
    problem.push_back(to_string(unknownMeasurement));
    return problem;
}
