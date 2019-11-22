#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(){
        int fact(int x){
                int y = 1;
                for(int i = 2; i <= x; i++) y = y * i;
                return y;
        }
        int fn_a(int k, int n){
                return fact(n) / fact(n - k);
        }
        int fn_c(int k, int n){
                return fact(n) / (fact(n - k) * fact(k));
        }
        int k0 = 3;
        int n0 = 5;
        int k1 = 2;
        int n1 = 4;
        int k2 = 4;
        int n2 = 5;

        int t = 5;
        int m0 = 8;
        int m1 = 10;
        int m2 = 11;

        int xn0 = 10;
        int xk0 = 5;
        int xr0 = 4;
        int xs0 = 2;
        int xn1 = 10;
        int xk1 = 4;
        int xr1 = 5;
        int xs1 = 3;

        int x0 = fn_a(k0, n0); //na otsenku 3
        int x1 = fn_a(k1, n1);
        int x2 = fn_a(k2, n2);
        printf("%d%s %d\n", k0, "-znachnih, sostavlennih kombinatsiyami tsifr 1, 2, 3, 4, 5 -", x0);
        printf("%d%s %d\n", k1, "-znachnih, sostavlennih kombinatsiyami tsifr 2, 4, 6, 8 -", x1);
        printf("%d%s %d\n", k2, "-znachnih, sostavlennih kombinatsiyami tsifr 1, 3, 7, 8, 9 -", x2);
        if (x0 > x1){
                if (x0 > x2) printf("%d%s\n\n", k0, "-znachnih kombinatsiy bolshe");
                else printf("%d%s\n\n", k2, "-znachnih kombinatsiy bolshe");
        }
        else {
                if (x1 > x2) printf("%d%s\n\n", k1, "-znachnih kombinatsiy bolshe");
                else printf("%d%s\n\n", k2, "-znachnih kombinatsiy bolshe");
        }

        int v0 = fn_c(t, m0); //na otsenku 4
        int v1 = fn_c(t, m1);
        int v2 = fn_c(t, m2);
        printf("%s %d %s %d\n", "Iz", m0, "kandidatov: ", v0);
        printf("%s %d %s %d\n", "Iz", m1, "kandidatov: ", v1);
        printf("%s %d %s %d\n\n", "Iz", m2, "kandidatov: ", v2);

        printf("%s%d%s%d%s%d%s%d\n", "1) n = ", xn0, ", k = ", xk0, ", r = ", xr0, ", s = ", xs0); //na otsenku 5
        float xp0 = (float) fn_c(xs0, xk0) * (float) fn_c(xr0 - xs0, xn0 - xk0) / (float) fn_c(xr0, xn0);
        printf("%s %f\n", "Veroyatnost: ", xp0);
        printf("%s%d%s%d%s%d%s%d\n", "2) n = ", xn1, ", k = ", xk1, ", r = ", xr1, ", s = ", xs1);
        float xp1 = (float) fn_c(xs1, xk1) * (float) fn_c(xr1 - xs1, xn1 - xk1) / (float) fn_c(xr1, xn1);
        printf("%s %f\n", "Veroyatnost: ", xp1);
}
