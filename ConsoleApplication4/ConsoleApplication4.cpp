
#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string firstName; 
    string lastName;  
    int age;               

    
    static int userCount;

public:
    
    User(const string& firstName, const string& lastName, int age)
        : firstName(firstName), lastName(lastName), age(age) {
        userCount++; 
    }

    
    static int getUserCount() {
        return userCount;
    }

    
    void printInfo() const {
        cout << "Name: " << firstName << endl;
        cout << "LastName: " << lastName << endl;
        cout << "Age: " << age << endl;
    }
};


int User::userCount = 0;

int main() {
    User user1("Ivan", "Ivanov", 25);
    User user2("Andrew", "Petrenko", 30);

    user1.printInfo();
    user2.printInfo();

    cout << "AmountOfUsers: " << User::getUserCount() << endl;

    return 0;
}

