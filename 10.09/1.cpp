#include <iostream>
using namespace std;

/**
 * 日期类
 **/
class myDate
{
    public:
        myDate();    //  构造函数
        myDate(int, int, int);   //   构造函数
        void setDate(int, int, int);   //   设置日期
        void setDate(myDate);   //   设置日期
        myDate getDate();    //   获取日期
        void setYear(int);   //   设置年份
        int getMonth();    //   获取月份
        void printDate() const;   //   打印日期

        private:
            int year, month, day;   //   成员变量，年月日
};
myDate::myDate()
{
    year = 0, month = 0, day = 0;
}
myDate::myDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void myDate::setDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
    return;
}
void myDate::setDate(myDate m)
{
    year = m.year;
    month = m.month;
    day = m.day;
    return;
}
myDate myDate::getDate()
{
    return *this;
}
void myDate::setYear(int y)
{
    year = y;
    return;
}
int myDate::getMonth()
{
    return month;
}
void myDate::printDate() const
{
    cout << year << "/" << month << "/" << day << endl;
    return;
}

/**
 * 学生类
 **/
class Student
{
    public:
        Student();
        Student(string);
        void setStudent(string, myDate);
        void setName(string);
        string getName();
        void setBirthday(myDate);
        myDate getBirthday();
        void printStudent() const;
        Student(const Student &s);

    private:
        string name;
        myDate birthday;
};
Student::Student() : name("NoName"), birthday(myDate()){};
Student::Student(string n) : name(n), birthday(myDate()){};

Student::Student(const Student &s)
{
    name = "Copy_" + s.name;
    birthday = s.birthday;
}
void Student::setStudent(string n, myDate b)
{
    name = n;
    birthday.setDate(b);
    return;
}
void Student::setName(string n)
{
    name = n;
    return;
}
string Student::getName()
{
    return name;
}
void Student::setBirthday(myDate b)
{
    birthday.setDate(b);
    return;
}
myDate Student::getBirthday()
{
    return birthday;
}
void Student::printStudent() const
{
    cout << "姓名:" << name << ",\t生日:";
    birthday.printDate(); //调用类myDate 的成员函数
    cout << endl;
}

// int main()
// {
//     Student student;
//     student.printStudent();
//     student.setName("Ron");
//     student.printStudent();
//     Student *stu[2] = {new Student(), &student};
//     Student stud[2] = {Student(), student};
//     cout << "----------" << endl;
//     for (int i = 0; i < 2; i++) {
//         stu[i]->printStudent();
//     }
//     for (int i = 0; i < 2; i++) {
//         stud[i].printStudent();
//     }
//     cout << "----------" << endl;
//     student.setName("harry");
//     for (int i = 0; i < 2; i++) {
//         stu[i]->printStudent();
//     }
//     for (int i = 0; i < 2; i++) {
//         stud[i].printStudent();
//     }
//     cout << "----------" << endl;
//     stu[0]->setName("Hermione");
//     stu[1]->setName("Jane");
//     stud[0].setName("Poter");
//     stud[1].setName("Snake");
//     student.printStudent();
//     for (int i = 0; i < 2; i++) {
//         stu[i]->printStudent();
//     }
//     for (int i = 0; i < 2; i++) {
//         stud[i].printStudent();
//     }
//     return 0;
// }

int main()
{
    Student student;
    student.printStudent();
    student.setName("Ron");
    Student ss[2] = {student, Student()};
    ss[0].printStudent();
    ss[1].printStudent();
    student.setName("hermione");
    student.printStudent();
    ss[0] = Student(student);
    ss[0].printStudent();
    ss[1].printStudent();
    return 0;
}