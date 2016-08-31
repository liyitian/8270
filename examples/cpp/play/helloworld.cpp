#include<iostream>

int main(){
	std::cout << "Hello World" << std::endl;
}

class Student
{
    public:
        const char* getName() const
        {
            return name;
        }
    private:
      char* name;
};
