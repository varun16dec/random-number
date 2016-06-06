#include<iostream>
#include<random>

using namespace std;
int main()
{
    std::random_device rd;      //obtain random number from hardware
    std::mt19937 eng(rd());    //seed the generator
    std::uniform_int_distribution<>distr(25,63);    //define range

    for(int n=0;n<40; ++n)
        cout<<distr(eng)<<' ';

}
