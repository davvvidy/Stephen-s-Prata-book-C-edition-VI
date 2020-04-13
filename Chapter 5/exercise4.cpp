#include <iostream>
float const DaffnesIncrease = 0.10;
float const CleosIncrease = 0.05;
float const PayIn = 100;

int main()
{
    using namespace std;
    float DaffnesMoney = PayIn;
    float CleosMoney = PayIn;
    int years = 0;
    do 
    {
        DaffnesMoney = DaffnesMoney + DaffnesIncrease*PayIn;
        CleosMoney = CleosMoney + CleosMoney*CleosIncrease;
        years++;
    } while (CleosMoney < DaffnesMoney);

    cout << "After " << years << " years Cleo will have more money than Daffne. Cleo will have "<< CleosMoney << " and Daffney "<< DaffnesMoney << endl;
    //system("pause");
    return 0;
}