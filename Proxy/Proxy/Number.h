#pragma once
#include<iostream>
#include<string>

using namespace std;

class Number {
public:
    virtual int generate(std::string animal) = 0;
};
