#include<iostream>
using namespace std;
#include<list>
#include<string>

//list容器 排序案例

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
//指定排序规则
bool compare(Person& p1, Person& p2) {
	//按年龄,升高升序
	if (p1.m_age == p2.m_age)return p1.m_height > p2.m_height;
	return p1.m_age < p2.m_age;
}

void test01() {

	list<Person>L;//创建容器
	//准备数据
	Person p1("yiyi", 11, 170);
	Person p2("erer", 22, 160);
	Person p3("sansan", 34, 180);
	Person p4("sisi", 15, 157);
	Person p5("wuwu", 34, 156);
	Person p6("liuliu",12, 192);
	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "姓名: " << it->m_name << "年龄: " << it->m_age << "身高: "<<it->m_height<<endl;
	}
	
	cout << "--------------------" << endl;
	cout << "排序后:" << endl;
	
	L.sort(compare);//升序
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "姓名：" << it->m_name << "年龄：" << it->m_age << "身高：" << it->m_height << endl;
	}
}

int main() {

	test01();

	system("pause");
	return 0;
}