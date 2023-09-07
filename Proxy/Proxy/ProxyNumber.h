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

	bool hasPermission; // 权限控制变量
	shared_ptr<LuckyNumber>luckynumber;
	map<string, int> cache;

	//重写父类的方法
	int generate(std::string animal) override {

		//延迟初始化
		if (luckynumber == nullptr)
		{
			luckynumber = make_shared<LuckyNumber>();
		}
		// 检查权限
		if (hasPermission==false) {

			cout<<"非法输入,不允许访问.";

		}
		if (hasPermission == true)
		{
			cout << "允许访问.";
		}
		// 检查缓存
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