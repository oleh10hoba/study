#include <iostream>
using namespace std;
class Table2D
{
    string name;
    int width;
    int height;
    int *begin;
    int *array_1;
public:
    Table2D(string name, int width, int height):
        name(name), width(width), height(height)
    {
        cout << "Constructor " << name << endl;
        array_1 = new int[width*height];
    }
    Table2D(const Table2D& copied_object) :
        name(copied_object.name), width(copied_object.width), height(copied_object.height)
    {
        array_1 = new int[width*height];
        for(int i = 0; i < sizeof(array_1); i++)
        {
            array_1[i] = copied_object.array_1[i];
        }
        cout << "Constructor copid " << name << " to " << copied_object.name << endl;
    }

    void set_name(string name)
    {
        this->name = name;
    }
    void show_ellement(int row, int collumn)
    {
        cout << array_1[row*width+collumn];
    }
    string get_name() const
    {
        return name;
    }
    void set_element(int row, int collumn, int value)
    {
        array_1[row*width+collumn] = value;
    }
    int get_width() const
    {
        return width;
    }
    int get_height() const
    {
        return height;
    }
    void show()const
    {
        cout << name << " " << width << " " << height << endl;
    }
    Table2D add(const Table2D& added)
    {
        Table2D new_object = Table2D("Added",width,height);
        for(int i = 0; i < sizeof(new_object.array_1); i++)
        {
            new_object.array_1[i] = added.array_1[i] + this->array_1[i];
        }
        return new_object;
    }
    Table2D multiply(const Table2D& multipled)
    {
        Table2D new_object = Table2D("Multipled",width,height);
        for(int i = 0; i < sizeof(new_object.array_1); i++)
        {
            new_object.array_1[i] = multipled.array_1[i] * this->array_1[i];
        }
        return new_object;
    }
    ~Table2D()
    {
        cout << "Destroyer " << name << endl;
        //delete array_1[];
    }
};
int main()
{
    Table2D t1 = Table2D("t1", 3, 4);
    Table2D t2(t1);
    Table2D t3 = Table2D("t3", 5, 6);
    t2.set_name("t2");
    t1.show();
    t2.show();
    t3.add(t3);
    return 0;
}
