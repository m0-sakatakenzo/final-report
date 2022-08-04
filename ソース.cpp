#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

class person {
	string name;
	int age;
	string address;
public:
	void setName(const string& newName) { name = newName; }
	string getName() { return name; }
	void setAge(int newAge) { age = newAge; }
	int getAge() { return age; }
	void setAddress(const string& newAddress) { address = newAddress; }
	string getAddress() { return address; }
};

void Auto(int times){
	vector<int> R0{};
	vector<int> R1{};
	vector<int> R2{};
	vector<int> Num{};
	random_device engine;
	uniform_int_distribution<unsigned> dist1(0, 9);
	uniform_int_distribution<unsigned> dist2(20, 60);
	for (int i = 0; i < times; ++i) {
		R0.push_back(dist1(engine));
		R1.push_back(dist1(engine));
		R2.push_back(dist1(engine));
		Num.push_back(dist2(engine));
	}
	sort(Num.begin(), Num.end());

	vector<string> lastname = {"����","���","����","�c��","�ɓ�","�}��","�J","�X","����","����"};
	vector<string> firstname = {"��Y","���Y","���Y","�J�C�W","�A�t��","�Y���Y","�Ԏq","�V�Y","�S��","�H���q"};
	vector<string> place = { "����","���","��t","�_�ސ�","���","�k�C��","����","���s","����","�L��" };
	vector<person> name{};
	for (int x = 0;x < times;++x) {
			name.emplace_back();
		name[x].setName(lastname[R0[x]] += firstname[R1[x]]);
		name[x].setAge(Num[x]);
		name[x].setAddress(place[R2[x]]);
		cout << "����:" << name[x].getName() << "(" << name[x].getAge() << ")" << "�Z��:" << name[x].getAddress() << endl;
	};
}

int main() {
	int times;
	times = 3;
	Auto(times);
	cout << endl;
}
