# Object-Oriented-Programming-Methodology-Case-Study
Hierarchical Representation of Different Animal With There Respective Sound
#include <iostream>
using namespace std;

// Base class representing an animal
class Animal {
public:
    virtual void makeSound() const = 0; 
    virtual ~Animal() {} 
};
class Vertebrates:public Animal{
    // virtual void makeSound()=0;
};

class Invertebrates:public Animal{
    // virtual void makeSound()=0;
};

class Mammal : public Vertebrates {
public:
   
};

// Subclass for birds
class Bird : public Vertebrates {
public:
   
};

// Subclass for fish
class Fish : public Vertebrates {
public:
 
};

// Subclass for Reptiles
class Reptile : public Vertebrates {
    public:

};

// Subclass for worm
class worm:public Invertebrates{
    public:
    
};

// concrete class for lion
class Lion : public Mammal {
public:
    void makeSound() const override {
        cout << "Roar!" << std::endl;
        
    }
};

// Concrete class for a parrot
class Parrot : public Bird {
public:
    void makeSound() const override {
        cout << "Squawk!" << std::endl;
    }
};

//concerete class for a Fish
class Dolphins:public Fish{
    public:
    void makeSound() const override {
        cout<<"chirp"<<endl;
    }

};

//concerete class for a snake
class Snake:public Reptile{
    public:
    void makeSound() const override {
        cout<<"Hiss"<<endl;
    }
};

int main() {
    
    Lion lion;     //Making a object of Lion class is lion
    Parrot parrot;     //Making a object of Parrot is parrot
    Dolphins dolphins;    //Making a object of Dolphins is dolphins
    Snake snake;   //Making a object of Snake is snake

    string x;
    cout<<"Choose a Name of Animal for the Animal voice :"<<endl;
    cout<<"1)lion    "<<endl
    <<"2)parrot"  <<endl<<"3)dolphin"  <<endl <<"4)snake"<<endl;
    cin>>x;
    if(x=="lion"){
        cout<<"Lion says: ";
        lion.makeSound();
    }
    else if(x=="parrot"){
        cout<<"parrot says: ";
        parrot.makeSound();
    }
    else if(x=="dolphin"){
        cout<<"Dolphins says: ";
        dolphins.makeSound();
    }
    else if(x=="snake"){
        cout<<"snake says: ";
        snake.makeSound();
    }
    else{
        cout<<"Enter a correct name"<<endl;
    }
  return 0;
}
