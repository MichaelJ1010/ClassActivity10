#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double sales;
    double commission;

    cout << "how much money have you made in sales?" << endl;
    cin >> sales;

    if(sales > 15'000){
        commission = 0.2;
    }else if (sales >= 10'000){
        commission = 0.15;
    }else{
        commission = 0.1;
    }
    
    cout << "your commission is: " << fixed << setprecision(2) << sales * commission;

    return 0;
}