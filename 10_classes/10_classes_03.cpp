#include <iostream>

class Urun{
    protected:
    std::string urunAdi;
    double fiyat;
    int stokAdedi;

    public:
    Urun(const std::string& v_urunAdi, double v_fiyat, int v_stokAdedi){
        urunAdi = v_urunAdi;
        fiyat = v_fiyat;
        stokAdedi = v_stokAdedi;
    }
};

class Elektronik : public Urun{
    private: 
    int garantiSuresi;

    public:
    Elektronik(const std::string& v_urunAdi, double v_fiyat, int v_stokAdedi, int v_garantiSuresi) : Urun(v_urunAdi, v_fiyat, v_stokAdedi), garantiSuresi(v_garantiSuresi){
    }
    void bilgileriGoster() const {
        std::cout<<"Ürün Adı: "<<urunAdi<<"\n";
        std::cout<<"Ürün Fiyatı: "<<fiyat<<"\n";
        std::cout<<"Ürün Stok Adedi: "<<stokAdedi<<"\n";
        std::cout<<"Ürün Garanti Süresi: "<<garantiSuresi<<"\n";
    }
};

int main(){
    Elektronik laptop("Macbook Air M1",30000,100,3);
    laptop.bilgileriGoster();
}