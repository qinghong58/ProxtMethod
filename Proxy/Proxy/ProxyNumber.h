#pragma once
#include<iostream>
#include<string>
#include<map>
#include<memory>
#include"Number.h"
#include"LuckyNumber.h"

using namespace std;

class ProxyNumber : public Number
{

public:
	ProxyNumber() =default;
	ProxyNumber(bool permission) : hasPermission(permission) {}

	bool hasPermission; // Ȩ�޿��Ʊ���
	shared_ptr<LuckyNumber>luckynumber;
	map<string, int> cache;

	//��д����ķ���
	int generate(std::string animal) override {

		//�ӳٳ�ʼ��
		if (luckynumber == nullptr)
		{
			luckynumber = make_shared<LuckyNumber>();
		}
		// ���Ȩ��
		if (hasPermission==false) {

			cout<<"�Ƿ�����,���������.";

		}
		if (hasPermission == true)
		{
			cout << "�������.";
		}
		// ��黺��
		if (cache.find(animal) != cache.end()) {
			return cache[animal];
		}
		else
		{
			int result = luckynumber->generate(animal);
			cache[animal] = result;
			return result;
		}

	}

};