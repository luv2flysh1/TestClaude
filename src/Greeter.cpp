#include "Greeter.h"

Greeter::Greeter(const std::string &name) : m_name(name) {}

std::string Greeter::greet() const {
    return "Hello, " + m_name + "!";
}

void Greeter::setName(const std::string &name) {
    m_name = name;
}

std::string Greeter::getName() const {
    return m_name;
}
