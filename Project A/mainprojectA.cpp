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
        SecretType(string personName = "", int personAge = 0, int personWeight = 0, double personHeight = 0)
        {
            name = personName;
            age = personAge;
            weight = personWeight;
            height = personHeight; 
        }

        // Setter functions 
        void setName(string &newName)
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
};

int main() 
{



    return 0; 
}