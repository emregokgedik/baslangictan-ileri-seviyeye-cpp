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
    BankaHesabi bankaHesabi(123456789,10000.99,"Emre Gökgedik");
    //std::cout<<bankaHesabi.getBakiye();
    //Üstteki kodu aktif hale getir ve hata olduğunu gör
    std::cout<<bankaHesabi.getBakiye();
    //çıktıyı 10001 olarak veriyor çünkü:
    //std::cout biçimi bu değeri yuvarlayıp 10001 olarak yazıyor.
    /*
    1. en üste #include <iomanip> eklemesini yapın (std::fixed ve std::setprecision için)

    2. Aşağıdaki kod ile gerçek değeri yazdırın (Yaşadığınız bu hatayı ve çözümü ai chatbot (gpt vs.) kullanarak araştırın)
    
    std::cout << std::fixed << std::setprecision(2) << bankaHesabi.getBakiye();

    */
}