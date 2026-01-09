#include <gtest/gtest.h>
#include "Greeter.h"

TEST(GreeterTest, ConstructorSetsName) {
    Greeter greeter("Alice");
    EXPECT_EQ(greeter.getName(), "Alice");
}

TEST(GreeterTest, GreetReturnsCorrectMessage) {
    Greeter greeter("Bob");
    EXPECT_EQ(greeter.greet(), "Hello, Bob!");
}

TEST(GreeterTest, SetNameChangesName) {
    Greeter greeter("Alice");
    greeter.setName("Charlie");
    EXPECT_EQ(greeter.getName(), "Charlie");
}

TEST(GreeterTest, GreetReflectsNameChange) {
    Greeter greeter("Alice");
    greeter.setName("David");
    EXPECT_EQ(greeter.greet(), "Hello, David!");
}

TEST(GreeterTest, HandlesEmptyName) {
    Greeter greeter("");
    EXPECT_EQ(greeter.greet(), "Hello, !");
    EXPECT_TRUE(greeter.getName().empty());
}

TEST(GreeterTest, HandlesNameWithSpaces) {
    Greeter greeter("John Doe");
    EXPECT_EQ(greeter.greet(), "Hello, John Doe!");
}
