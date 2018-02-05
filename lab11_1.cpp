#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
    double height;
    // เพิ่มเอาเอง
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;
    }

    int getId()
    {
        return id;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getHeight() {
        return height;
    }
};

int main ()
{
    Student Noctis(36548, "Noctis", 20, 176);
    Student Ignis (36549, "Ignis", 20, 183);
    Student Gladiolus(36550, "Gladiolus", 23, 198);
    Student Prompto(36551, "Prompto", 20, 173);

    cout << "Id : " << Noctis.getId() << endl;
    cout << "Name : " << Noctis.getName() << endl;
    cout << "Age : " << Noctis.getAge() << endl;
    cout << "Height : " << Noctis.getHeight() << endl;

    cout << "Id : " << Ignis.getId() << endl;
    cout << "Name : " << Ignis.getName() << endl;
    cout << "Age : " << Ignis.getAge() << endl;
    cout << "Height : " << Ignis.getHeight() << endl;

    cout << "Id : " << Gladiolus.getId() << endl;
    cout << "Name : " << Gladiolus.getName() << endl;
    cout << "Age : " << Gladiolus.getAge() << endl;
    cout << "Height : " << Gladiolus.getHeight() << endl;

    cout << "Id : " << Prompto.getId() << endl;
    cout << "Name : " << Prompto.getName() << endl;
    cout << "Age : " << Prompto.getAge() << endl;
    cout << "Height : " << Prompto.getHeight() << endl;
    return 0;
}
