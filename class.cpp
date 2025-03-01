#include <iostream>

using namespace std;

class Data
{
    private:
        int m_a;
        int m_b;
    public:
        Data(int a,int b):m_a{a},m_b{b}
        {

        }
        ~Data()=default;
        void show()
        {
            cout<<"a="<<m_a<<"b="<<m_b<<endl;
        }
};

int main()
{
    Data d(1,2);
    d.show();
    return 0;
}