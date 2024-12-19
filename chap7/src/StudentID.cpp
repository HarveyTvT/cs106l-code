#include "../include/StudentID.h"
#include <string>

StudentID::StudentID(std::string name, std::string sunet, int idNumber) {
    this->name = name;
    this->sunet = sunet;
    this->idNumber = idNumber;
}

StudentID::StudentID() {
    name = "John Appleseed";
    sunet = "japplseed";
    idNumber = 00000001;
}

StudentID::~StudentID() {}

std::string StudentID::getName() { return name; }
std::string StudentID::getSunet() { return sunet; }
int StudentID::getID() { return idNumber; }

void StudentID::setName(std::string name) { this->name = name; }
void StudentID::setSunet(std::string sunet) { this->sunet = sunet; }
void StudentID::setID(int idNumber) {
    if (idNumber >= 0) {
        this->idNumber = idNumber;
    }
}
