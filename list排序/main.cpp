#include<iostream>
using namespace std;
#include<list>
#include<string>

//list���� ������

class Person {
public:

	Person(string name, int age,int height) {
		this->m_age = age;
		this->m_name = name;
		this->m_height = height;
	}

	string m_name;
	int m_age;
	int m_height;
};
//ָ���������
bool compare(Person& p1, Person& p2) {
	//������,��������
	if (p1.m_age == p2.m_age)return p1.m_height > p2.m_height;
	return p1.m_age < p2.m_age;
}

void test01() {

	list<Person>L;//��������
	//׼������
	Person p1("yiyi", 11, 170);
	Person p2("erer", 22, 160);
	Person p3("sansan", 34, 180);
	Person p4("sisi", 15, 157);
	Person p5("wuwu", 34, 156);
	Person p6("liuliu",12, 192);
	//��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "����: " << it->m_name << "����: " << it->m_age << "���: "<<it->m_height<<endl;
	}
	
	cout << "--------------------" << endl;
	cout << "�����:" << endl;
	
	L.sort(compare);//����
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "������" << it->m_name << "���䣺" << it->m_age << "��ߣ�" << it->m_height << endl;
	}
}

int main() {

	test01();

	system("pause");
	return 0;
}