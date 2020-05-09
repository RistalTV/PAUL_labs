#pragma once
#include <string>
#include <deque>
#include "Book.h"
#include "Data.h"
using namespace std;

class User
{
public:
	//==============================================================
	//  ����������
	//==============================================================
		//--------------------------------------------------------------
		// ���������
		//--------------------------------------------------------------
		
		//  ��������� ������
		void set_login(string login);
		//  ��������� ������
		int  set_pass(string pass);
		//  ��������� ������ �������
		void set_access(unsigned int access);

		//  ��������� ID
		void set_id(unsigned int id);
		//  ��������� �����
		void set_name(string name);
		//  ��������� �������
		void set_surname(string surname);
		//  ��������� ��������
		void set_patronymic(string patronymic);
		//  ��������� ��� ��������
		void set_birthday(string birthday);
		
		
		//--------------------------------------------------------------
		//  ��������
		//--------------------------------------------------------------
		
		// �������� �����, ������� ���� �����
		void rm_Books_taken(Book book);
		// �������� �����, ������� ���� ����������
		void rm_Books_Back_Returned(Book book);
		
		
		//--------------------------------------------------------------
		//  ����������
		//--------------------------------------------------------------
		
		// ���������� �����, ������� ���� �����
		void add_Books_taken(Book book);
		// ���������� �����, ������� ���� ����������
		void add_Books_Back_Returned(Book book);



		//--------------------------------------------------------------
		//  ���������
		//--------------------------------------------------------------
		
		// ��������� ������
		string get_login();
		// ��������� ������
		string get_pass();
		// ��������� ������ �������
		int get_access();
	 
		// ��������� ID
		int get_id();
		// ��������� �����
		string get_name();
		// ��������� �������
		string get_surname();
		// ��������� ��������
		string get_patronymic();
		// ��������� ��� ��������
		string get_birthday();
		// ��������� ���� ���������� �� ����, ������� ���� �����
		deque<Book> get_Books_taken();
		// ��������� ���� ���������� �� ����, ������� ���� ����������
		deque<Book> get_Books_Back_Returned();

	//--------------------------------------------------------------
private:

	// ����� ������������
	string _login;
	// ������ ������������
	string _pass;
	// ������� ������� ������������
	unsigned int _access;

	
	// ����� ����������� � ��
	unsigned int _id;
	// ��� ������������
	string _name;
	// ������� ������������
	string _surname;
	// �������� ������������
	string _patronymic;
	// ���� �������� ������������
	string _birthday;


	// �����
		// ������
		deque<Book> Books_taken;
		// ����� �����������
		deque<Book> Books_Back_Returned;
};