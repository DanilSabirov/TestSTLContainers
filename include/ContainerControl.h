#ifndef CONTAINERCONTROL_H
#define CONTAINERCONTROL_H


class ContainerControl
{
    public:
        ContainerControl();
        virtual ~ContainerControl();
        virtual void InsertElementsBack(int K) = 0;
        virtual void InsertElementsFront(int K) = 0;
        virtual void LinearSearch() = 0;
        virtual void Sort() = 0;
        virtual void Mix() = 0;
        virtual void Clear() = 0;
    protected:


    private:
};

#endif // CONTAINERCONTROL_H
