#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0; 
    virtual ~Animal() {} 
};
class Vertebrates:public Animal{
    
};

class Invertebrates:public Animal{
    
};

class Mammal : public Vertebrates {
public:
   
};


class Bird : public Vertebrates {
public:
   
};


class Fish : public Vertebrates {
public:
 
};


class Reptile : public Vertebrates {
    public:

};


class worm:public Invertebrates{
    public:
    
};


class Lion : public Mammal {
public:
    void makeSound() const override {
        cout << "Roar!" << std::endl;
        
    }
};


class Parrot : public Bird {
public:
    void makeSound() const override {
        cout << "Squawk!" << std::endl;
    }
};


class Dolphins:public Fish{
    public:
    void makeSound() const override {
        cout<<"chirp"<<endl;
    }

};


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
