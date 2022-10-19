#include<iostream>
using namespace std;
class animal
    {
            public:
            int age;
            int weight;

            void speak()
            {
                cout<<"speaking"<<endl;
            }
    };
    class dog : public animal
    {
            void attack()
            {
                cout<<"attack function is called"<<endl;
            }
    };

int main()
{
    dog o1;
    o1.age=99;
   cout<< o1.age<<endl;
}