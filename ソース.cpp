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

	vector<string> lastname = {"²“¡","—é–Ø","‚‹´","“c’†","ˆÉ“¡","â}–å","’J","X","•“¡","‰Á“¡"};
	vector<string> firstname = {"ˆê˜Y","Ÿ˜Y","‘¾˜Y","ƒJƒCƒW","ƒAƒtƒ","’YŸ˜Y","‰Ôq","—V‹Y","ƒSƒ“","”H“¤q"};
	vector<string> place = { "“Œ‹","‘åã","ç—t","_“Şì","é‹Ê","–kŠC“¹","‰«“ê","‹“s","•Ÿ‰ª","L“‡" };
	vector<person> name{};
	for (int x = 0;x < times;++x) {
			name.emplace_back();
		name[x].setName(lastname[R0[x]] += firstname[R1[x]]);
		name[x].setAge(Num[x]);
		name[x].setAddress(place[R2[x]]);
		cout << "–¼:" << name[x].getName() << "(" << name[x].getAge() << ")" << "ZŠ:" << name[x].getAddress() << endl;
	};
}

int main() {
	int times;
	times = 3;
	Auto(times);
	cout << endl;
}
