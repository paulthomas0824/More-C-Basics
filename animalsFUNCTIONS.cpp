#include <iostream>
#include <string>
using namespace std;

class ANIMAL
{
private:
    
    int legs;
    int age;
    
    string color;
    string sound;
    string name;
    
public:
    
    int getLegs()
    {
        return legs;
    }
    
    void setLegs(int legs)
    {
        this->legs = legs;
    }
    
    string getColor()
    {
        return color;
    }
    
    void setColor(string color)
    {
        this->color = color;
    }
    
    int getAge()
    {
        return age;
    }
    
    void setAge(int age)
    {
        this->age = age;
    }
    
    string getSound()
    {
        return sound;
    }
    
    void setSound(string sound)
    {
        this->sound = sound;
    }
    
    string getName()
    {
        return name;
    }
    
    void setName(string name)
    {
        this->name = name;
    }
    
    ANIMAL(string name)
    {
        setName(name);
    }
    
    ANIMAL()
    {
        
    }
};

int main() {
    ANIMAL DOG;
    DOG.setName("Dog");
    DOG.setAge(2);
    DOG.setSound("Bark");
    DOG.setColor("Brown");
    DOG.setLegs(4);
    
    ANIMAL CAT("Cat");
    CAT.setAge(1);
    CAT.setSound("Meow");
    CAT.setColor("Black");
    CAT.setLegs(4);
    
    ANIMAL COW("Cow");
    COW.setAge(4);
    COW.setSound("Maaa!");
    COW.setColor("White");
    COW.setLegs(4);
    
    cout << DOG.getName() << " makes sound like \"" << DOG.getSound() << "\"\n" << DOG.getColor() << "\"\n";
    cout << CAT.getName() << " makes sound like \"" << CAT.getSound() << "\"\n";
    cout << COW.getName() << " makes sound like \"" << COW.getSound() << "\"\n";
    
    getchar();
    return 0;
}

