#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <map>

class Purchases
{

public:

	Purchases(std::map<std::string, float> _items); //�����������, ����������� �������

	~Purchases(); //����������

	void add_item(); //���������� ������ � �������

	void delete_item(); //�������� ������ �� �������

	void edit_price(); // ��������� ����

	void print_buy(); //����� ���� �������, ������� ��������� � �������

	void print_list(); //����� ������� �� ��������

protected:

	std::multimap <std::string, float> buyItem; //�������
	std::map <std::string, float> items; //�������

};

