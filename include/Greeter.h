#ifndef GREETER_H
#define GREETER_H

#include <string>

class Greeter {
public:
    Greeter(const std::string& name);
    std::string greet() const;
    void setName(const std::string& name);
    std::string getName() const;

private:
    std::string m_name;
};

#endif
