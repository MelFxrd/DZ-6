#include <iostream>
#include <string>

using namespace std;


class Clone {
public:
    string name;
    int id;

    void output() {
        cout << "Имя: " << name << "; ID: " << id << endl;
    }

    Clone(string name, int id) {
        this->name = name;
        this->id = id;
    }

    Clone(const Clone& clone) {
        string namesList[3] = { "Олег", "Иван", "Степан" };
        int randIndex = rand() % 3;

        this->name = namesList[randIndex];
        this->id = clone.id + 1;
    }
};


int main()
{
    setlocale(LC_ALL, "");

    Clone clone1("Даниил", 1);
    clone1.output();

    Clone clone2 = clone1;
    clone2.output();

    Clone clone3(clone2);
    clone3.output();

    return 0;
}