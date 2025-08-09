#include <iostream>

class BankaHesabi{
    private:
    long long hesapNo;
    double bakiye;
    std::string hesapSahibi;

    public:
    BankaHesabi(long long v_hesapNo, double v_bakiye, std::string v_hesapSahibi){
        hesapNo = v_hesapNo;
        bakiye = v_bakiye;
        hesapSahibi=v_hesapSahibi;
    }
    double getBakiye(){
        return bakiye;
    }
};

int main(){
}