# TestClaude

[![CI](https://github.com/USERNAME/TestClaude/actions/workflows/ci.yml/badge.svg)](https://github.com/USERNAME/TestClaude/actions/workflows/ci.yml)
[![codecov](https://codecov.io/gh/USERNAME/TestClaude/branch/main/graph/badge.svg)](https://codecov.io/gh/USERNAME/TestClaude)

A simple C++ greeting application for Linux.

## Requirements

- CMake 3.16+
- C++17 compatible compiler (GCC, Clang)

## Building

```bash
mkdir build && cd build
cmake ..
make
```

## Running

```bash
./TestClaude
```

## Testing

Tests use Google Test (fetched automatically via CMake).

```bash
mkdir build && cd build
cmake ..
make
ctest --output-on-failure
```

## Code Coverage

To generate a coverage report locally:

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Debug -DCODE_COVERAGE=ON
cmake --build build
cd build && ctest
lcov --capture --directory . --output-file coverage.info
lcov --list coverage.info
```

## Project Structure

```
TestClaude/
├── CMakeLists.txt
├── include/
│   └── Greeter.h
├── src/
│   ├── main.cpp
│   └── Greeter.cpp
├── tests/
│   └── GreeterTest.cpp
└── .github/
    └── workflows/
        └── ci.yml
```

## License

MIT
