#ifndef GREETER_H
#define GREETER_H

#include <string>

/**
 * @brief A class that generates personalized greetings.
 *
 * The Greeter class stores a name and provides methods to generate
 * greeting messages and manage the stored name.
 */
class Greeter {
  public:
    /**
     * @brief Constructs a Greeter with the specified name.
     * @param name The name to use in greetings.
     */
    Greeter(const std::string &name);

    /**
     * @brief Generates a greeting message.
     * @return A greeting string in the format "Hello, <name>!".
     */
    std::string greet() const;

    /**
     * @brief Sets a new name for greetings.
     * @param name The new name to use.
     */
    void setName(const std::string &name);

    /**
     * @brief Gets the current name.
     * @return The currently stored name.
     */
    std::string getName() const;

  private:
    std::string m_name; ///< The name used in greetings.
};

#endif
