#include <iostream>
using std::string;

class Employee {
  private:
    string Name;
    string Company;
    int Age;

  public:
    void setName(string name) {
      Name = name;
    }
    string getName() {
      return Name;
    }

    void setCompany(string company) {
      Company = company;
    }
    string getCompany() {
      return Company;
    }

    void setAge(int age) {
      if(age >= 18)
      Age = age;
    }
    int getAge() {
      return Age;
    }

    void IntroduceYourself() {
      std::cout << "Name - " << Name << std::endl;
      std::cout << "Company - " << Company << std::endl;
      std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age) {
      Name = name;
      Company = company;
      Age = age;
    }
};

int main()
{
  Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25);
  /* employee1.Name = "Saldina";
  employee1.Company = "YT-CodeBeauty";
  employee1.Age = 25; */
  employee1.IntroduceYourself();

  Employee employee2 = Employee("John", "Amazon", 35);
  employee2.IntroduceYourself();

  Employee employee3 = Employee("Jorna", "BJ", 33);
  employee3.setAge(32);
  std::cout << employee3.getName() << " age is " << employee3.getAge() << " years old" << std::endl;
}
