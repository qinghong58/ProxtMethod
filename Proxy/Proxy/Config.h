#pragma once
#include<iostream>
#include<string>
#include<unordered_map>
#include"LuckyNumber.h"
#include"ProxyNumber.h"

//声明代理对象
ProxyNumber pro;

static string animal;

shared_ptr<ProxyNumber>proxy_number = make_shared<ProxyNumber>();

//枚举各种动物
enum class Animals
{
    Rat,
    Ox,
    Tiger,
    Rabbit,
    Dragon,
    Snake,
    Horse,
    Goat,
    Monkey,
    Rooster,
    Dog,
    Pig,
};

unordered_map<string, Animals> AnimalsMap{
    { "Rat", Animals::Rat },
    { "Ox", Animals::Ox },
    { "Tiger", Animals::Tiger },
    { "Rabbit", Animals::Rabbit },
    { "Dragon", Animals::Dragon },
    { "Snake", Animals::Snake },
    { "Horse", Animals::Horse },
    { "Goat", Animals::Goat },
    { "Monkey", Animals::Monkey },
    { "Rooster", Animals::Rooster },
    { "Dog", Animals::Dog },
    { "Pig", Animals::Pig }
};