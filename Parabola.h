#ifndef PARABOLA_H
#define PARABOLA_H


class Parabola
{
    public:
        Parabola();
        virtual ~Parabola();
        int x;
        void inputValue(int a, int b, int c);
        int Quadratic(int A, int B, int C, int x);
        int Discriminant (int A, int B, int C);
        int Roots(int A, int B, int D);
        int Extremum (int A, int B, int C);
    protected:
    private:
        int A, B, C;
};

#endif // PARABOLA_H
