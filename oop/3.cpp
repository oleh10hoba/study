#include <iostream>
using namespace std;
class Table2D
{
    string name;
    int width;
    int height;
    int *begin;
public:
    Table2D(string name, int width, int height):
        name(name), width(width), height(height) 
    {
        cout << "Constructor " << name << endl; 
        int *array_1 = new int[width]; 
    }
    Table2D(const Table2D& copied_object) :
        name(copied_object.name), width(copied_object.width), height(copied_object.height)
    {
        cout << "Constructor copid " << name << " to " << copied_object.name << endl; 
    }
    const add(const Table2D& added)
    {
        
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_name()
    {
        return name;
    }
    void set_element(int row, int column, int value)
    {
        array_1[row][column] = value;
    }
    int get_width()
    {
        return width;
    }
    int get_height()
    {
        return height;
    }
    void show()
    {
        cout << name << " " << width << " " << height << endl;
    }
    ~Table2D()
    {
        cout << "Destroyer " << name << endl;
        delete array_1[];
    }
};
int main()
{
    Table2D t1 = Table2D("tab", 77, 110);
    Table2D t2(t1);
    t1.show();
    t2.show();
    return 0;
}