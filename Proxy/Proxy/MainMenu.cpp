#include<iostream>
#include<memory>
#include<Windows.h>
#include"LuckyNumber.h"
#include"Number.h"
#include"ProxyNumber.h"
#include"Config.h"

using namespace std;

void CheckAnimalsItem(string animal);
void AnimalsItem()
{
    cout << "Rat" << endl;
    cout << "Ox" << endl;
    cout << "Tiger" << endl;
    cout << "Rabbit" << endl;
    cout << "Dragon" << endl;
    cout << "Snake" << endl;
    cout << "Horse" << endl;
    cout << "Goat" << endl;
    cout << "Monkey" << endl;
    cout << "Rooster" << endl;
    cout << "Dog" << endl;
    cout << "Pig" << endl;
}

void CheckAnimals()
{
	cout << "����F)�鿴�����б�" << endl;
	cout << "����������Ҫ��ѯ�Ķ������:";
	cin >> animal;

    if (animal=="F")
    {
        AnimalsItem();
        Sleep(3000);
        CheckAnimals();
    }

    CheckAnimalsItem(animal);

}


void CheckAnimalsItem(string animal)
{
    pro.hasPermission = true;
    auto it = AnimalsMap.find(animal);
    if (it!= AnimalsMap.end())
    {   
        //�ҵ���Ӧ��ö��ֵ
        Animals animals = it->second;
        switch (animals)
        {
        case Animals::Rat:
            cout << pro.generate(animal);
            break;
        case Animals::Ox:
            cout << pro.generate(animal);
            break;
        case Animals::Tiger:
            cout << pro.generate(animal);
            break;
        case Animals::Rabbit:
            cout << pro.generate(animal);
            break;
        case Animals::Dragon:
            cout << pro.generate(animal);
            break;
        case Animals::Snake:
            cout << pro.generate(animal);
            break;
        case Animals::Horse:
            cout << pro.generate(animal);
            break;
        case Animals::Goat:
            cout << pro.generate(animal);
            break;
        case Animals::Monkey:
            cout << pro.generate(animal);
            break;
        case Animals::Rooster:
            cout << pro.generate(animal);
            break;
        case Animals::Dog:
            cout << pro.generate(animal);
            break;
        case Animals::Pig:
            cout << pro.generate(animal);
            break;
        default:
            cout << "û�ж�Ӧ������";
            break;
        }
    }
    else
    {
        pro.hasPermission = false;
        cout << pro.generate(animal);
    }
}


int main()
{
	CheckAnimals();
	return 0;
}