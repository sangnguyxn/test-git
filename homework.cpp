#include <iostream>
#include <cmath>

int main() {
    /*
    Viết chương trình nhập vào số km đi được và tính tiền cước taxi.

    Quy tắc tính:

    1 km đầu tiên: 15.000 VNĐ.

    Từ km thứ 2 đến km thứ 5: 13.500 VNĐ/km.

    Từ km thứ 6 trở đi: 11.000 VNĐ/km.

    Nếu tổng quãng đường lớn hơn 120km, khách hàng sẽ được giảm 10% trên tổng số tiền cước.
    */

    float km;
    std::cout << "Nhap so km ban can tinh: "; std::cin >> km;

    if (km <= 0 )
    {
        std::cout << "So km khong hop le." << "\n";
    }
    else if (km > 120)
    {
        float tong_tien = 15 + ( (4*13.5) + (km-5)*11 );
        tong_tien = tong_tien * 0.9; // giảm 10%
        std::cout << "so tien phai tra cho " << km << " la " << tong_tien << "000vnđ" << "\n";
    }
    else if (km >= 6)
    {
        float tong_tien = 15 + (4*13.5) + ((km-5)*11);
        std::cout << "so tien phai tra cho " << km << " la " << tong_tien << "000vnđ" << "\n";
    }
    else if (km >= 1 && km <= 5)
    {
        float tong_tien = 15 + ((km-1)*13.5);
        std::cout << "so tien phai tra cho " << km << " la " << tong_tien << "000vnđ" << "\n";
    }
    hello everyone
    
    
    
}
