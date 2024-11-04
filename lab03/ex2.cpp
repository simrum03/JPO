#include <iostream>
#include <string>

class Student {
private:
    std::string m_name;
    int m_age;

public:
    void setAge(int a) {
        if (a >=0){
            m_age = a;
        } else {
            std::cout << "Invalid age." << std::endl;
        }
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
        if(!n.empty()){
            m_name = n;
        } else {
            std::cout << "You cannot input empty string as a name." << std::endl;
        }
    }
    std::string getName() const {
        return m_name;
    }
};

int main(){
    Student studenciak;
    studenciak.setAge(5);
    std::cout << studenciak.getAge();
    return 0;
}