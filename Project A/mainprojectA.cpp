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

    SecretType num1;

    num1.print();

    num1.setName("Danberry"); 
    num1.setAge(23); 
    num1.setWeight(140);
    num1.setHeight(5.9); 

    cout << "Persons name is " << num1.getName() << ": They are " << num1.getAge() << " years old." << endl;
    cout << "They weigh: " << num1.getWeight() << "lb and is " << num1.getHeight() << " inches tall." << endl;  


    return 0; 
}