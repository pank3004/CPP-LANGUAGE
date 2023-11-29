#include<iostream>
using namespace std;
 
class Animal {
    public:
    string name;
    string sound;
    Animal(string name, string sound) {
        this->name = name;
        this->sound = sound;
    }
    void work() {
       cout<< name<<" "<<sound<<endl;
    }
};
 
int main() {
        Animal *dog = new Animal("Dog", "Barks");
        Animal *cat = new Animal("Cat", "Meows");
        Animal *lion = new Animal("Lion", "Roars");
        dog->work();
        cat->work();
        lion->work();
}