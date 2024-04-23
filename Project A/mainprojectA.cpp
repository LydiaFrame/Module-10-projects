/*
    Program Name: Module 10 Project A 
    Author: Lydia Frame 
    Email: lydia.r.frame@gmail.com
    Date: April 23, 2024
    
    Description:
    This program demonstrates a simple example of a C++ program.
    It includes a SecretType class with getter and setter methods, as well as a 
    main function that creates an instance of the class and calls its methods.
*/

#include <iostream> 
#include <string> 

using namespace std;

class SecretType
{
    private:
        string name;
        int age;
        int weight; 
        double height; 
    public: 
        //constructor with defult parameters 
        SecretType(string personName = "", int personAge = 0, int personWeight = 0, double personHeight = 0.0)
        {
            name = personName;
            age = personAge;
            weight = personWeight;
            height = personHeight; 
        }

        // Setter functions 
        void setName(const string &newName)
        {
            name = newName;
        }
        void setAge(int newAge)
        {
            age = newAge;
        }
        void setWeight(int newWeight)
        {
            weight = newWeight;
        }
        void setHeight(double newHeight)
        {
            height = newHeight;
        }

        // Getter functions 
        string getName() const
        {
            return name;
        }
        int getAge() const
        {
            return age;
        }
        int getWeight() const
        {
            return weight;
        }
        double getHeight() const
        {
            return height;
        }

        // Print function
        void print() 
        {
            cout << "Name: " << name << " "; 
            cout << "Age: " << age << " "; 
            cout << "Weight: " << weight << " ";
            cout << "Height: " << height << endl; 
        }
};

int main() 
{
    // Creat object num1
    SecretType num1;

    // Call print function with default values 
    num1.print();

    // Set new values
    num1.setName("Danberry"); 
    num1.setAge(23); 
    num1.setWeight(140);
    num1.setHeight(5.9); 

    // Retrieve and output new values 
    cout << "Persons name is " << num1.getName() << ": They are " << num1.getAge() << " years old." << endl;
    cout << "They weigh: " << num1.getWeight() << "lb and is " << num1.getHeight() << " inches tall." << endl;  


    return 0; 
}