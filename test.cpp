#include <iostream>
using namespace std;
  
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
  
int main()
{
    cout << myMax<int>(3, 7) << endl; // Call myMax for int
    cout << myMax<double>(3.0, 7.0)
         << endl; // call myMax for double
    cout << myMax<char>('g', 'e')
         << endl; // call myMax for char
  
    return 0;
}

unsigned int Span::shortestSpan() const
{
        std::vector<int>::iterator i;
        std::vector<int> vect;

        int (*varAbs)(int) = &std::abs;
       
        if (this->vector.size() <= 1)
                throw IsEmptyException();
        std::adjacent_difference(this->vector.begin(), this->vector.end(), std::back_inserter(vect));
        /*std::cout << "Her vector after adjacent difference \n";
        for (i = vect.begin(); i != vect.end(); ++i)
        {
                std::cout <<*i << "\n";
        }
         std::cout << "Finish output\n";*/
        std::transform(vect.begin(), vect.end(), vect.begin(), varAbs);//Apply valAbs to all elements of vect[] and store the modified elements from vect.begin
        /*std::cout << "Her vector after transform function \n";
        for (i = vect.begin(); i != vect.end(); ++i)
        {
                std::cout <<*i << "\n";
        }
         std::cout << "Finish output\n";*/
        return *min_element(vect.begin(), vect.end());
}

unsigned int Span::longestSpan() const
{
        std::vector<int> vect;

        int (*varAbs)(int) = &std::abs;
        if (this->vector.size() <= 1)
                throw IsEmptyException();
        std::adjacent_difference(this->vector.begin(), this->vector.end(), std::back_inserter(vect));
        std::transform(vect.begin(), vect.end(), vect.begin(), varAbs);
        return *max_element(vect.begin(), vect.end());
}