#include <iostream>
using namespace std;

int hallar_movimientos_por_color(int b, int c){
    return b+c;
}

int hallar_movimientos_por_combinacion(int a,int b,int c,int d,int e ,int f){
    return hallar_movimientos_por_color(a,b)+hallar_movimientos_por_color(c,d)+hallar_movimientos_por_color(e,f);
}

void halla_numero_minimo_de_6(int num1, int num2,int num3,int num4,int num5,int num6){
    if(num1<= num2 && num1<= num3 && num1<=num4 && num1<=num5 && num1<=num6)
        cout<<"BCG "<<num1<<endl;
    else if(num2<= num3 && num2<= num4 && num2<=num5 && num2<=num6)
        cout<<"BGC "<<num2<<endl;
    else if (num3<=num4 && num3<=num5 && num3<=num6)
        cout<<"CBG "<<num3<<endl;
    else if(num4<=num5 && num4<=num6)
        cout<<"CGB "<<num4<<endl;
    else if(num5<=num6)
        cout<<"GBC "<<num5<<endl;
    else
        cout<<"GCB "<<num6<<endl;
}

void hallar_minima_combinacion_int(int bin1_b ,int bin1_g, int bin1_c ,int bin2_b ,int bin2_g, int bin2_c, int bin3_b,int bin3_g, int bin3_c  ){
    int bcg=hallar_movimientos_por_combinacion(bin2_b,bin3_b,bin1_c,bin3_c,bin1_g,bin2_g);
    int bgc=hallar_movimientos_por_combinacion(bin2_b,bin3_b,bin1_g,bin3_g,bin1_c,bin2_c);
    int cbg=hallar_movimientos_por_combinacion(bin2_c,bin3_c,bin1_b,bin3_b,bin1_g,bin2_g);
    int cgb=hallar_movimientos_por_combinacion(bin2_c,bin3_c,bin1_g,bin3_g,bin1_b,bin2_b);
    int gbc=hallar_movimientos_por_combinacion(bin2_g,bin3_g,bin1_b,bin3_b,bin1_c,bin2_c);
    int gcb=hallar_movimientos_por_combinacion(bin2_g,bin3_g,bin1_c,bin3_c,bin1_b,bin2_b);
    halla_numero_minimo_de_6(bcg,bgc,cbg,cgb,gbc,gcb);
}

int main() {
    int bin1_b,bin1_g,bin1_c,bin2_b,bin2_g,bin2_c,bin3_b,bin3_g,bin3_c;
    while(cin>> bin1_b>>bin1_g>>bin1_c>>bin2_b>>bin2_g>>bin2_c>>bin3_b>>bin3_g>>bin3_c)
        hallar_minima_combinacion_int(bin1_b,bin1_g,bin1_c,bin2_b,bin2_g,bin2_c,bin3_b,bin3_g,bin3_c);
    return 0;

}
