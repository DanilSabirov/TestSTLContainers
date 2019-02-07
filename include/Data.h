#ifndef DATA_H
#define DATA_H
#include <vector>

class Data
{
    public:
        Data(int size_);
        Data(int size_, int Number);
        virtual ~Data();
        friend bool operator == (const Data &d1, const Data &d2);
        friend bool operator < (const Data &d1, const Data &d2);
        int Number;
    protected:

    private:
        std::vector <char> v; // 1 byte
};

#endif // DATA_H
