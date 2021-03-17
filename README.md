# C++ Library Template

![GitHub release (latest by date)](https://img.shields.io/github/v/release/jothepro/cmake-conan-library-template)

A basic C++ library project template using cmake and conan.

## File Structure

```
.
├── CMakeLists.txt
├── Doxyfile
├── LICENSE
├── README.md
├── VERSION
├── conanfile.py
├── docs
│   ├── doxygen-awesome-css
│   │   └── ...
│   └── img
│       └── ...
├── src
│   ├── CMakeLists.txt
│   ├── example.cpp
│   └── include
│       └── MyLibrary
│           └── example.hpp
├── test
│   ├── CMakeLists.txt
│   └── mylibrarytest.cpp
└── test_package
    ├── CMakeLists.txt
    ├── conanfile.py
    └── example.cpp

```


## Credits

This template is inspired by these CppCon Talks:

- [C++Now 2017: Daniel Pfeifer “Effective CMake"](https://www.youtube.com/watch?v=bsXLMQ6WgIk) 
  
- [CppCon 2018: Mateusz Pusz “Git, CMake, Conan - How to ship and reuse our C++ projects”](https://www.youtube.com/watch?v=S4QSKLXdTtA)