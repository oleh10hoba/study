#include <iostream>
using namespace std;
class Table2D
{
    string name;
    int width;
    int height;
    int *begin;
    int * array_1;
public:
    Table2D(string name, int width, int height):
        name(name), width(width), height(height)
    {
        int var = width * height;
        array_1 = new int [var];
        cout << "Constructor " << name << " sizeof - " << sizeof(array_1) << " - " << var << " - " << width << " " << height <<  endl;
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
    void set_element(int num, int value)
    {
        array_1[num] = value;
    }
    int get_sizeof_array_1()
    {
        return sizeof(this->array_1);
    }
    void print_all_element()
    {
        cout << this->name << " elements: " << endl;
        cout << sizeof(this->array_1)<<endl;
        for(int i = 0; i < sizeof(this->array_1); i++)
        {
            cout << array_1[i] << "\t" ;
        }
        cout << endl;
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
        Table2D new_object = Table2D(this->name,this->width,this->height);
        for(int i = 0; i < sizeof(new_object.array_1); i++)
        {
            new_object.array_1[i] = added.array_1[i] + this->array_1[i];
            cout << added.array_1[i] << " - " << this->array_1[i] << " - " << new_object.array_1[i] << endl;
        }
        cout << endl << new_object.array_1[0] << endl;
        cout << endl;
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
        delete array_1;
    }
};
int main()
{
    Table2D t1 = Table2D("t1", 5, 6);

    Table2D t2(t1);
    Table2D t3 = Table2D("t3", 2, 4);
    t2.set_name("t2");
    cout << t1.get_name() << " - " << t1.get_sizeof_array_1() << endl;
    t2.set_element(0,   1);
    t2.set_element(1,2);
    t2.set_element(2,3);
    t2.set_element(3,4);
    t3.set_element(0,5);
    t3.set_element(1,6);
    t3.set_element(2,7);
    t3.set_element(3,9);
    cout << t2.get_name() << " - " << t2.get_sizeof_array_1() << endl;
    t2.print_all_element();
    t3.print_all_element();
    cout << endl;
    t3 = t3.add(t2);
    t3.print_all_element();
    cout << t3.get_name() << " - " << t3.get_sizeof_array_1() << endl;
    int *ar = new int [6];
    cout << "+" << sizeof(ar) << endl;
    return 0;
}
