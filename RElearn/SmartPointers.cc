#include <iostream>
#include <memory>

using namespace std;

class Entity
{
public:
    Entity()
    {
        cout << "Created Entity!" << endl;
    }
    ~Entity()
    {
        cout << "Destroyed Entity!" << endl;
    }

    void Print()
    {
        cout << "hello" << endl;
    }
};

int main()
{
    {
        // unique_ptr<Entity> entity(new Entity());
        unique_ptr<Entity> entity = make_unique<Entity>();

        entity->Print();
    }
}