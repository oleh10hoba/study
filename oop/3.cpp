#include <iostream>
using namespace std;
class Table2D
{
    string name;
    int width;
    int height;
    int *begin;
    int * array_1;
    int sizee = 0 ;
public:
    Table2D(string name, int width, int height):
        name(name), width(width), height(height)
    {
        sizee = 0;
        int var = width * height;
        array_1 = new int [var];
        cout << "Constructor " << name << " size - " << sizee << " - " << var << " - " << width << " " << height <<  endl;
    }
    Table2D(const Table2D& copied_object) :
        name(copied_object.name), width(copied_object.width), height(copied_object.height)
    {
        array_1 = new int[width*height];
        for(int i = 0; i < sizee; i++)
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
        sizee ++;
    }
    void set_element(int num, int value)
    {
        array_1[num] = value;
        sizee ++;
    }
    int get_size_array_1()
    {
        return sizee;
    }
    void print_all_element()
    {
        cout << this->name << " elements: " << endl;
        cout << sizeof(this->array_1)<<endl;
        for(int i = 0; i < sizee; i++)
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
        for(int i = 0; i < new_object.sizee; i++)
        {
            new_object.array_1[i] = added.array_1[i] + this->array_1[i];
            cout << added.array_1[i] << " - " << this->array_1[i] << " - " << new_object.array_1[i] << endl;
        }
        cout << endl;
        return new_object;
    }
    Table2D multiply(const Table2D& multipled)
    {
        Table2D new_object = Table2D("Multipled",width,height);
        for(int i = 0; i < sizee; i++)
        {
            new_object.array_1[i] = multipled.array_1[i] * this->array_1[i];
        }
        return new_object;
    }
    const ostream & showing(ostream & s) const
    {
        s << " + " <<  endl;
        for(int i = 0; i < sizee; i++)
        {
            s << array_1[i] << "\t";
        }
        s << endl;
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
    cout << "Sizee = " << t1.get_size_array_1() << endl;
    Table2D t2(t1);
    Table2D t3 = Table2D("t3", 2, 6);
    t2.set_name("t2");
    cout << t1.get_name() << " - " << t2.get_size_array_1() << endl;
    t2.set_element(0, 1);
    cout << t2.get_name() << " Sizee = " << t2.get_size_array_1() << endl;
    t2.set_element(1,2);
    cout << t2.get_name() << " Sizee = " << t2.get_size_array_1() << endl;
    t2.set_element(2,3);
    cout << t2.get_name() << " Sizee = " << t2.get_size_array_1() << endl;
    t2.set_element(3,4);
    cout << t2.get_name() << " Sizee = " << t2.get_size_array_1() << endl;
    t2.set_element(4,5);
    cout << t3.get_name() << " Sizee = " << t3.get_size_array_1() << endl;
    t3.set_element(1,6);
    cout << t3.get_name() << " Sizee = " << t3.get_size_array_1() << endl;
    t3.set_element(4,5);
    cout << t3.get_name() << " Sizee = " << t3.get_size_array_1() << endl;
    t3.set_element(2,7);
    cout << t3.get_name() << " Sizee = " << t3.get_size_array_1() << endl;
    t3.set_element(3,9);
    cout << t3.get_name() << " Sizee = " << t3.get_size_array_1() << endl;
    cout << t2.get_name() << " - " << t2.get_size_array_1() << endl;
    t2.print_all_element();
    t3.print_all_element();
    cout << endl;
    t3 = t3.add(t2);
    t3.print_all_element();
    cout << t3.get_name() << " - " << t3.get_size_array_1() << endl;
    t2.showing(cout);
    return 0;
}
