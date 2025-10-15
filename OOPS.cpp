#include <iostream>
#include <cstring>
using namespace std;
class Hero{
    //properties
    private:

    int health;

    public:
    char *name;
    char level;
    static int timeToComplete; //static property
    //default constructor
    Hero(){
        cout<<"Default constructor called"<<endl;
        name = new char[100];

    }
    //parameterized constructor
    Hero(int health,char level,char name[]){
        //this pointer stores the address of the current object
        this->health=health;
        this->level=level;
        strcpy(this->name,name);    
    }
    //copy constructor
    //aur ye constructor use krke u can make deep copy of name
    Hero(Hero &temp){
        cout<<"Copy constructor called"<<endl;
        //here with temp we r using dot operator because health is a inbuilt function which returns health of the object
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        this->health=temp.health;
        this->level=temp.level;
        strcpy(this->name,temp.name);

    }
    //to print the results
    void print(){
        cout<<"LEVEL: "<<this->level;
        cout<<"HEALTH: "<<this->health;
        cout<<"NAME: "<<this->name<<endl;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char l){
        level=l;
    }
    void setName(char name[]){
        
    }
    //destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

};
//initialize static variable
int Hero::timeToComplete=5;
int main(){
    char name[7]="sarkar";
    Hero h1;
    h1.setHealth(12);
    h1.setLevel('A');
    strcpy(h1.name,name);
    //if it is a pointer we use arrow operator and if it is an object we use dot operator
    //this is a copy constructor
   
    //now using default copy constructor WE CREATE HERO 2 FROM HERO 1
    
    Hero h2(h1);
    h1.print();
    h2.print();
    h1.name[0]='B';
    //shallow copy when we use default copy constructor if u want to see then comment the user defined copy constructor
    h1.print();
    h2.print();
    

    //asignment operator
    Hero h3=h2;
    h3.print();
    Hero*p=new Hero;
    //manually calling destructor
    delete p;

    //destructor
    //it is called automatically when the object goes out of scope
    //it is used to free the memory allocated to the object
    //remember  static memory is automatically freed but dynamic memory is not freed automatically
    //so we use destructor to free the dynamic memory
    cout<<Hero::timeToComplete<<endl;
    //this is ho to print static variable

    return 0;
   
   
}