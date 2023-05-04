#include <iostream>
using std::string;

class AbstractEmployee {
  virtual void AskForPromotion()=0;
};

class Employee: AbstractEmployee {
  protected:
    string Name;
  private:
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
    void AskForPromotion () {
      if (Age > 30)
        std::cout << Name << " got promoted!" << std::endl;
      else
        std::cout << Name << ", sorry No promotion for you!" << std::endl;
    }
};

class Developer: public Employee {
  public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
      :Employee(name, company, age)
    {
      FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug() {
      std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }

};

class Teacher: public Employee {
  public:
    string Subject;
    void PrepareLesson() {
      std::cout << Name << " is preparing " << Subject << " lesson " << std::endl;
    }
    Teacher(string name, string company, int age, string subject)
      :Employee(name, company, age)
    {
      Subject = subject;
    }
};

int main()
{
/*   Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25); */
  /* employee1.Name = "Saldina";
  employee1.Company = "YT-CodeBeauty";
  employee1.Age = 25; */
/*   employee1.IntroduceYourself(); */

/*   Employee employee2 = Employee("John", "Amazon", 35); */
/*   employee2.IntroduceYourself(); */

/*   Employee employee3 = Employee("Jorna", "BJ", 33); */
  /* employee3.setAge(32);
  std::cout << employee3.getName() << " age is " << employee3.getAge() << " years old" << std::endl; */

  /* employee1.AskForPromotion();
  employee2.AskForPromotion();
  employee3.AskForPromotion(); */

  Developer d = Developer("Itachi", "Huozhiguo", 23, "忍者");
  d.FixBug();
  d.AskForPromotion();

  Teacher t = Teacher("鸣人", "火之国", 35, "螺旋丸");
  t.PrepareLesson();
  t.AskForPromotion();

}
